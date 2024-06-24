#include <iostream>
#include <memory>
#include <string>
using namespace std;

void func(unique_ptr<MyString> s)
{
   s->display();
}
int  main()
{
   unique_ptr<MyString> s1 (new MyString("SRIVIJAYA"));
   func(s1);
}
