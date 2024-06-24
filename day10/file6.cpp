#include <iostream>
#include <vector>
#include <typeinfo>
using namespace std;
class DS
{
public : virtual void foo() = 0;
};
class Stack : public DS
{
public : void foo() {}
};
class Queue : public DS
{
public : void foo() {}
};
int main()
{
    Stack s;
    Queue q;
    DS &ds_ref = s;
    
    Stack &s_ref = dynamic_cast<Stack &>(ds_ref);
    
    return 0;
}
