#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include "functions.h"
#include <iostream>
using namespace std;

void new_entry(vector<item> &items){
  cout<<"Please type in the form of:\n";
  cout<<"Name, Availability, Amount, Price, Retailer:\n";
  item temp;
  bool new_item=true;
  cin>>temp.name>>temp.flag>>temp.stock>>temp.price>>temp.shops;
  temp.soldout=0;
  for (int i = 0; i<items.size(); i++){
    if (items[i].name==temp.name&&items[i].shops==temp.shops){
      //replace the original with temp
      items[i] = temp;
      new_item=false;//it's an existing item just updated
    }
  }
  if (new_item == true){
    items.push_back(temp);
  }
}
