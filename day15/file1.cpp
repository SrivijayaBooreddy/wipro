#include <iostream>
#include <set>
using namespace std;
int main()
{
   set<int> myset;
   
   myset.insert(10);
   myset.insert(20);
   myset.insert(50);
   myset.insert(40);
   
   cout << "Set elements: ";
   for(auto it = myset.begin(); it != myset.end(); ++it)
   {
       cout << *it << " ";
   }
   auto it = myset.find(50);
   if (it != myset.end() )
   {
      cout << "Element found in the set" << endl;
   } else {
      cout << "Element is not found in the set" << endl;
   }
   return 0;
}
