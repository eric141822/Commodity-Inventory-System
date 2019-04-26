#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

struct item{
  string name;
  string flag;
  int stock;
  double price;
  string shops;
  int soldout;
};

void access(vector<item> &item);
void auto_update(vector<item> &item);
void policy (vector<item> &item);
void get_item_list (string filename, vector<item> &item);
void write_list (string output_name, vector<item> &item);
void search (vector<item> &item);

#endif
