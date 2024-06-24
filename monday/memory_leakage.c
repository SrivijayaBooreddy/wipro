#include <stdlib.h>
#include <iostream>
using namespace std;
class student
{
   public : student()
       {
         cout << "Constructor " << this << endl;
       }
       ~student()
       {
         cout << "Destructor " << this << endl;
       }
};
int main()
{
  int n;
  cin >> n;
  auto p = new double[n];
   delete [] p;
}
