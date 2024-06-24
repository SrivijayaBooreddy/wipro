#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
int n;
string names;
cout << "Enter the names : ";
cin >> n;
vector<string> v;
v.reserve(n);
for(int i = 0; i<n ; i++)
{
cin >> names;
v.push_back(names);
}
vector<string>::iterator ptr = max_element(v.begin() , v.end());
cout << *ptr <<endl;
cout << ptr - v.begin() << endl;
return 0;
}
