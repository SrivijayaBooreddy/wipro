#include <iostream>
#include <string>
using namespace std;

class student
{
  int regno;
  string name;
 
public: student() 
   {
     cout << "Constructor with zero arguments (Default Constructor) \n";
   }
   student(int p_regno, string p_name)
  {
        regno = p_regno;
        name = p_name;
       cout << "this : " << this << endl;
  }
  void readstudent()
  {
     cout << "Read Student \n";
  }
};
int main()
{
   student s1 = {1, "Srivijaya"};
   student s2 = {2, "Swetha"};
   student s3;

  cout << "&s1 = "<< &s1 << endl;
  cout << "&s2 = "<< &s2 << endl;
  cout << "&s3 = "<< &s3 << endl; 
   
}
