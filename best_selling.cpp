#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include "functions.h"
using namespace std;
void policy (vector<item> &item)
{
  int first = 0, second = 0, third = 0;    //This fisrt part finds the most popular items.
  int option;                              //By sorting the "soldout" part of the struct. 
  for (int j = 0; j<item.size(); j++){
    if (item[j].soldout > first){
      third = second;
      second = first;
      first = item[j].soldout;
    }
    else if (item[j].soldout > second){
      third = second;
      second = item[j].soldout;
    }
    else if (item[j].soldout > third){
      third = item[j].soldout;
    }
  }
  if (first == second){                     //This is to avoid reapeating output in case first = second, or second = third.
    second--;
  }
  if (second == third){ 
    third--;
  }
  for (int i = 0; i<item.size(); i++){     //We then list out the top selling items.
    if (item[i].soldout == first){         //Note that there may be 2 No.1 best selling items.
      cout<<"No.1 Best-selling item: "<<item[i].name<<'\n';
    }
  }
  for (int i = 0; i<item.size(); i++){
    if (item[i].soldout == second){
      cout<<"No.2 Best-selling item: "<<item[i].name<<'\n';
    }
  }
  for (int i = 0; i<item.size(); i++){
    if (item[i].soldout == third){
      cout<<"No.3 Best-selling item: "<<item[i].name<<'\n';
    }
  }                                       //Ask the user which "policy" to apply.
  cout<<"Available policies:\n1. 20% off for all items.\n2. Buy 3 get 1 free.\n(Note that you can only have one policy at a time)\nPlease enter your option: ";
  cin>>option;
  switch (option){
    case 1:
    cout<<"The mentioned items are now 20% off.\n";
    break;
    case 2:
    cout<<"The mentioned items are now buy 3 get 1 free.\n";
    break;
    default:
    cout<<"Invalid input, please choose function 4 to select a policy again.\n";
    break;
  }
}
