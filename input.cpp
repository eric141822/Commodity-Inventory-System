#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include "functions.h"
using namespace std;
//This function reads a string (which is the file name of the list) as an input, and stores the info into a vector.
void get_item_list (string filename, vector<item> &items)
{
  ifstream fin;
  fin.open(filename.c_str());
  string line;
  if (fin.fail()){     //Force quit the program if it fails.
    cout<<"Failed to open "<<filename<<"\nShutting system down.\n";
    exit(1);
  }
  string name, flag, shops;
  int stock, i = 0, soldout;
  double price;
  item temp;
  while (fin>>name>>flag>>stock>>price>>shops>>soldout){  //Read until eof.
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
