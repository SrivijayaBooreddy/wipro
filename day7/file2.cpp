#include <iostream>
#include <string>
using namespace std;
#pragma pack(1)
class Employee
{
int empid;
string name;
public:
void readEmployee( ){
cout <<"Enter the empid and name : ";
cin >> empid >> name;
}
void printEmployee(){
cout << "Emp Id : " << empid << endl;
cout << "Emp Name : "<< name << endl;
}
};
class SalariedEmpl : public Employee
{
int salary;
};
int main()
{
SalariedEmpl e1;
e1.readEmployee();
e1.printEmployee();
return 0;
}
