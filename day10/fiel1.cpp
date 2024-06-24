#include <iostream>
#include <vector>
#include <typeinfo>
using namespace std;
class DS
{
public : virtual ~DS(){}
};
class Stack : public DS
{};
int main()
{
  DS *ptr = new Stack();
  cout << typeid(ptr).name() << endl;
  cout << typeid(*ptr).name() << endl;
  
  return 0;
}
