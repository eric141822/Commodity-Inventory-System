#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include "functions.h"
using namespace std;

void access(vector<item> &item){
  for (int i = 0; i < item.size(); i++){
    cout<<left;
    cout<<setw(10)<<item[i].name;
    cout<<setw(20)<<item[i].flag;
    cout<<setw(5)<<item[i].stock;
    cout<<setw(5)<<item[i].price;
    cout<<setw(10)<<item[i].shops<<'\n';
  }
}
