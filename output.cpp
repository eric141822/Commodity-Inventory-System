#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include "functions.h"
using namespace std;

void write_list (string output_name, vector<item> &item)
{
  ofstream output(output_name.c_str());
  for (int i = 0; i < item.size(); i++){
    output<<item[i].name<<"     "<<item[i].flag<<"     "<<item[i].stock<<"     "<<item[i].price<<"     "<<item[i].shops<<'\n';
  }
  output.close();
}
