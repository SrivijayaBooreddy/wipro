#include <iostream>
#include <map>
using namespace std;
int main()
{
   map<char, int> freq;
   string str = "INDIA";
   
   for(char c : str)
   {
      freq[c] = freq[c] + 1;
   }
   for(auto &ele : freq)
   {
      cout << ele.first << " " << ele.second << endl;
   }
   return 0;
}
