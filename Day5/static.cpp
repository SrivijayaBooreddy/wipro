#include <iostream>
#include <cstring>
using namespace std;

class Student
{
  static int count;
  int regno;
  string name;
public:
  Student(string P_name);
  void display();
};
int Student::count = 0;
Student::Student(string p_name){
    count++;
    regno = count;
    name = p_name;
}
void Student::display(){
     cout <<regno <<" " << name << endl;
}
int main(){
   Student s1("Srivijaya");
   Student s2("Vijaya");
   s1.display();
   s2.display();
   return 0;
}
