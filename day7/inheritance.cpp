#include <iostream>
#include <string>
using namespace std;
#pragma pack(1)
class Employee
{
int empid;
string name;
};
class SalariedEmpl : public Employee
{
int salary;
};
int main()
{
cout << sizeof(Employee) << endl;
cout << sizeof(SalariedEmpl) << endl;
return 0;
}
