#include <iostream>
#include <algorithm>
#include <string>
#include <list>
using namespace std;
int main()
{
list<int> lst = {12,23,34,45,21};
list<int>::iterator it = lst.begin();
while(it != lst.end()){
cout << *it << ' ';
++it;
}
}
