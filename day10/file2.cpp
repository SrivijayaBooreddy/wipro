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
class Queue : public DS
{
public : void foo() {}
};
int main()
{
  DS *ptr = new Queue();
  cout << is_polymorphic<Queue>() << endl;
  cout << is_abstract<Queue>() << endl;
  cout << typeid(ptr).name() << endl;
  if(typeid(*ptr) == typeid(Stack))
     cout << "Pointing to Stack Object" << endl;
  else if(typeid(*ptr) == typeid(Queue))
     cout <<"Pointing to Queue Object" << endl;
  
  return 0;
}
