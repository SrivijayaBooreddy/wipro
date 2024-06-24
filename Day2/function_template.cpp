#include <iostream>
using namespace std;
int mymax(int a,int b)
{
   cout <<"Max : int \n";
   return a > b ? a : b;
}
float mymax(float a,float b)
{
   cout <<"Max : float \n";
   return a > b ? a : b;
}
int main()
{
   int a = 5, b = 8;
   float x = 6.3, y = 7.3;

   cout << mymax(5, 8) << endl;
   cout << mymax(6.3f, 7.3f) << endl;
}
