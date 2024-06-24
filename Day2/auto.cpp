#include <iostream>
#include <typeinfo>
using namespace std;
int main()
{
   auto x = 5;
   auto y = 4.5;
   auto c ='A';
   auto name = "Srivijaya";

   cout << "Size of c : " << sizeof(c) << " " << typeid(c).name() << endl;
   cout << "Size of x : " << sizeof(x) << " " << typeid(x).name() << endl;
   cout << "Size of y : " << sizeof(y) << " " << typeid(y).name() << endl;

   cout << "Size of name : " << sizeof(name) << " " << typeid(name).name() << endl; 
}
