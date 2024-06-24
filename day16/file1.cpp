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
   ifstream infile("names.txt");
   string str;
   list<string> sortedNames;
   
   while( getline(infile, str ) )
   {
      cout << str << endl;
      sortedNames.push_front(str);
   }
   sortedNames.sort();
   cout << "\n-------------------\n";
   for(auto &ele : sortedNames)
   cout << ele << " " << endl;
   infile.close();
   return 0;
   
}
