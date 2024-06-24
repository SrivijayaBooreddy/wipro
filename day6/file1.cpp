#include <iostream>
#include <vector>
using namespace std;
int main()
{
vector<int> v = {12,23,34,45};
for(int i = 0; i < v.size() ; i++)
cout << v.at(i) <<" " ;
return 0;
}
