#include <iostream>
#include <memory>
using namespace std;
int main()
{
  auto p1 (new int(5));
  cout << *p1 << endl;
  cout << typeid(p1).name() << endl;
  return 0;
}
