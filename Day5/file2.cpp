include <iostream>
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
  static void displayNumberOfStudents(){
         cout << count <<endl;
  }
};
int Student::count = 0;
int main(){
   Student s1("Srivijaya");
   Student s2("Vijaya");
   Student::displayNumberOfStudents();
   return 0;
}
