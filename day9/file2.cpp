#include <stdio.h>
#include <iostream>
using namespace std;
class Base
{
int base;
int *base_ptr;
public :
Base(int p_base = 0) : base(p_base)
{
cout << "Base Constructor \n";
base_ptr = new int[10];
}
virtual ~Base()
{
cout << "Base Destructor \n";
delete [] base_ptr;
}
virtual void display()
{
cout << "Base Display" << base << endl;
}
};
class Derived : public Base
{
int derived;
int *der_ptr;
public :
Derived(int p_base,int p_derived) : Base(p_base), derived(p_derived)
{
cout <<"Derived Constructor \n";
der_ptr = new int[5];
}
~Derived()
{
cout <<"Derived Destructor \n";
delete [] der_ptr;
}
void display()
{
cout <<"Derived Dispaly " << derived << endl;
}
};
int main()
{
Base *ptr = new Derived{1,2};
delete ptr;
return 0;
}
