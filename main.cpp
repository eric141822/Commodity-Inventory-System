#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "functions.h"
int main(){
  vector<item> item_list;
  cout<<"Welcome to the commodity management system!\nPlease enter the name of the item list: ";
  string list_name;
  cin>>list_name;
  get_item_list(list_name, item_list);
  cout<<"Here is the list of items:\n";
  access(item_list);
  cout<<"Please choose one of the functions.\n1. Search, 2. Access stock, 3. output stock to file, 4. best sellings \n(Enter -999 to end system):";
  int c;
  cin>>c;
  while (c != (-999)){
    if (c == 1){
      search(item_list);
    }
    else if (c == 2){
      access(item_list);
    }
    else if (c == 3){
      cout<<"Please enter name of output file: ";
      string output_name;
      cin>>output_name;
      write_list(output_name,item_list);
    }
    else if (c == 4){
      policy(item_list);
    }
    else{
      cout<<"Invalid input, input again after auto update.\n";
    }
    auto_update(item_list);
    cout<<"Please choose a function again.\n1. Search, 2. Access stock, 3. output stock to file, 4. best sellings \n(Enter -999 to end system):";
    cin>>c;
  }
  cout<<"Shutting system down.\nGoodbye!\n";
}
