#include <iostream>
using namespace std;
void myswap(int a,int b)
{
   a = a ^ b;
   b = a ^ b;
   a = a ^ b;
}
int main()
{
  int a = 5;
  int b = 10;
  myswap(a , b);
  cout << a << " " << b << endl;
}
