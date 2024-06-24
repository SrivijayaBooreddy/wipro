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
   int *a = new int{5};
   char *b;
   b = char (*a);
   return 0;
}
