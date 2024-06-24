#include <iostream>
using namespace std;
int mymax(int a,int b,int c );
int main()
{
   cout << mymax(5,10) << endl;
   cout << mymax(12,6) << endl;
   cout << mymax(12,6,18) << endl;

  return a > b ? ( a > c ? a : c ) : ( b > c ? b : c );
}
