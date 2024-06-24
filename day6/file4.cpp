#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void printVector(vector<int> &v)
{
cout << "Size : " << v.size() << endl;
for(int &ele : v)
   cout << ele <<' ';
cout << endl;
}
int main()
{
vector<int> v = {12,23,34,45,56};

cout <<"First Element : " << v.front() << endl;
cout <<"Last Element : " << v.back() << endl;

return 0;
}
