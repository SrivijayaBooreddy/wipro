#include <iostream>
#include <algorithm>
using namespace std;
class Distance
{
public:
   int feet;
   int inch;
   Distance(int p_feet = 0,int p_inch = 0)
   {
      feet = p_feet;
      inch = p_inch;
    }
   void printDistance( ) const
    {
       cout << feet <<"\'"<<inch<<"\'"<<endl;
    }
    Distance operator +(const Distance &d2) const
    {
        Distance temp;
        temp.feet = feet + d2.feet;
        temp.inch = inch + d2.inch;
        if(temp.inch >= 12)
        {
           temp.inch = temp.inch - 12;
           temp.feet += 1;
        }
        return temp;
     }
     friend ostream & operator <<(ostream &out,const Distance &d);
     friend bool operator <(const Distance &d1, const Distance &d2);
    
};
bool operator <(const Distance &d1, const Distance &d2)
{
   return (d1.feet * 12 + d1.inch) < (d2.feet * 12 + d2.inch);
}
ostream & operator <<(ostream &out,const Distance &d)
{
  cout << d.feet <<"\'"<<d.inch<<"\'"<<endl;
}
int main(){
    Distance arr[] = {Distance{5,3}, Distance{7}, Distance{5,1}};
    sort(begin(arr), end(arr) );
    for(auto ele : arr)
    {
      cout << ele;
    }
    return 0;
}
