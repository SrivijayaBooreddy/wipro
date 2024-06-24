#include <stdio.h>
#include <iostream>
using namespace std;
class Base 
{
   int base;
public :
   Base(int p_base = 0) : base(p_base)
   {}
   virtual void display()
   {
      cout << "Base Display" << base << endl;
   }
};
class Derived : public Base
{
    int derived;
public :
    Derived(int p_base,int p_derived) : Base(p_base),derived(p_derived)
    {}
    void display()
    {
       cout << "Derived Display " << derived << endl;
    } 
};
void func(Base *baseObj)
{
baseObj->display();
}
int main()
{
Derived derObj{3,5};
Base baseObj {12};
func(&baseObj);
func(&derObj);
return 0;
}
