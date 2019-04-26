#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include "functions.h"
using namespace std;
void get_item_list (string filename, vector<item> &items)
{
  ifstream fin;
  fin.open(filename);
  string line;
  if (fin.fail()){
    cout<<"Failed to open "<<filename<<"\nShutting system down.\n";
    exit(1);
  }
  string name, flag, shops;
  int stock, i = 0, soldout;
  double price;
  item temp;
  while (fin>>name>>flag>>stock>>price>>shops>>soldout){
    temp.name = name;
    temp.flag = flag;
    temp.stock = stock;
    temp.price = price;
    temp.shops = shops;
    temp.soldout = soldout;
    items.push_back(temp);
  }
  fin.close();
}
