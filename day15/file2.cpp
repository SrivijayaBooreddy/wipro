#include <iostream>
#include <set>
#include <queue>
using namespace std;
int main()
{
     priority_queue<int > myset;
     
     myset.push(20);
     myset.push(80);
     myset.push(50);
     myset.push(30);
     myset.pop();
     cout << myset.top() << endl;
    
     return 0;
}   
