#include <iostream>
using namespace std;
float area(int rad)
{
   return 3.14*rad*rad;
}
int area(int length,int breadth)
{
  return length*breadth;
}
int main()
{
  int r = 5;
  int len = 10;
  int b = 10;
  float areaofcircle = area(r);
  int areaofrect = area(len,b);
  cout << areaofcircle << endl;
  cout << areaofrect << endl;
  return 0;
}
