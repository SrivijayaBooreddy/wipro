#include <iostream>
#include <fstream>
#include <stdio.h>
#include <set>
#include <algorithm>
#include <string>
#include <list>

using namespace std;

int main()
{
   ifstream f1("names1.txt");
   ifstream f2("names2.txt");
   string str;
   list<string> lst1;
   list<string> lst2;
   
   infile >> str >> lst1;
   cout << "Data Read from file \n";
   cout << str << " " << lst1;
   
   infile >> str >> lst2;
   cout << "Data Read from file \n";
   cout << str << " " << lst2;
   
   lst1.merge(lst2);
   cout << "\n-------------------\n";
   for(auto &ele : lst1)
   cout << ele << " " << endl;
   f1.close();
   f2.close();
   return 0;
   
}
