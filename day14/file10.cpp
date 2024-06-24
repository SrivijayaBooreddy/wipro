#include <iostream>
#include <deque>
using namespace std;
void display(deque<int> &dq)
{
   deque<int>::const_iterator it = dq.begin();
   while(it != dq.end())
   {
       cout << *it <<" ";
       it = it + 1;
    }
   //auto it = dq.begin();
   //for(int i=0; i<dq.size(); i++)
   //   cout << i << " : " << dq[i] << " " << dq.at(i) << endl;
   cout << endl;
}
int main()
{
   deque<int> dq;
   
   dq.push_back(12);
   dq.push_back(23);
   dq.push_front(45);
   dq.push_front(56);
   display( dq );
   
   return 0;
}
