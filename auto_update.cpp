#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include "functions.h"
using namespace std;
/*現在的情況就是這個程式會看有沒有需要update的部分
（就是看他是不是out-of-stock/nearly-out-of-stock）
然後這兩者都會問他要不要restock
如果要的話就會問要restock多少
不要的話若又是out-of-restock
我們就會把這個item刪掉
*/

void auto_update(vector<item> &item){
  for (int i = 0;i<item.size();i++){
    if (item[i].flag == "out-of-stock" && item[i].stock > 0){
      if (item[i].stock > 20){
        item[i].flag = "in-stock";
        cout<<item[i].name<<" from "<<item[i].shops<<" is now in-stock\n";
      }
      else{
        item[i].flag = "nearly-out-of-stock";
        cout<<item[i].name<<" from "<<item[i].shops<<" is now nearly-out-of-stock\n";
      }
    }
    if (item[i].flag == "nearly-out-of-stock"){
      if (item[i].stock > 20){
        item[i].flag = "in-stock";
        cout<<item[i].name<<" from "<<item[i].shops<<" is now in-stock\n";
      }
      else if (item[i].stock == 0){
        item[i].flag = "out-of-stock";
        cout<<"Attention!\n"<<item[i].name<<" from "<<item[i].shops<<" is now out-of-stock\n";
      }
    }
    if (item[i].stock <= 20){
      if (item[i].flag == "in-stock"){
        item[i].flag = "nearly-out-of-stock";
        cout<<item[i].name<<" from "<<item[i].shops<<" is now nearly-out-of-stock\n";
      }
    }
    else if (item[i].stock == 0){
      if (item[i].flag != "out-of-stock"){
        item[i].flag = "out-of-stock";
        cout<<item[i].name<<" from "<<item[i].shops<<" is now out-of-stock\n";
      }
    }
  }
  for (int i = 0;i<item.size();i++){
    if (item[i].flag=="out-of-stock"||item[i].flag=="nearly-out-of-stock"){
      cout<<"Do you want to restock "<<item[i].name<<"? (yes/no): ";
      string stock;//要不要restock
      cin>>stock;
      if (stock == "yes"){
        cout<<"By how many? (Enter an integer): ";
        int restock_num;
        cin>>restock_num;
        item[i].stock+=restock_num;
        cout<<"The stock number of "<<item[i].name<<" is now "<<item[i].stock<<endl;
        item[i].soldout++;
      }
      else if (stock == "no"){
        if (item[i].flag=="out-of-stock"){
          item.erase(item.begin()+i);
          cout<<"The item "<<item[i].name<<" from "<<item[i].shops<<" has been removed\n";
        }
      }
      else{
        cout<<"Invalid input, please wait until next update.\n";
      }
    }
  }
}
