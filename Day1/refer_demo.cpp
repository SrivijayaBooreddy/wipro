#include <iostream>
using namespace std;
int main()
{
  int object = 5;
  int &reference = object;

  cout << "&object = " << &object <<endl;
  cout << "&reference = " << &reference <<endl;

  cout << "object = " << object <<endl;
  cout << "reference = " << reference <<endl;
  return 0;
}
