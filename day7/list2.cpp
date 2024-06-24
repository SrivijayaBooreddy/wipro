#include <iostream>
#include <list>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
list<Integer> lst = {12,23,34,43,21};
cout <<"---------------\n";
auto it = find(lst.begin(),lst.end(), 34);
lst.insert(it , 25);
it = lst.end();
while(it != lst.begin()){
it--;
cout << *it << ' ';
}
}
