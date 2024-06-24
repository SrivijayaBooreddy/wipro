#include <iostream>
#include <string>
using namespace std;

class Employee
{
    int emp_id;
    string name;
    int salary;
public:
       Employee()
       {
         cout << "Constructor " << this << endl;
       }
       Employee(int p_empid)
       {
       }
       ~Employee()
       {
         cout << "Destructor " << this << endl;
       }
};
void func()
{
      cout << "Start of Function \n";
      static Employee e1;
}
int main()
{
   func();
   cout << "Back in main \n";
   func(); 
}

