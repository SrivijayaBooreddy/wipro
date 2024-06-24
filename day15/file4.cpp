#include <iostream>
#include <map>
using namespace std;
int main()
{
map<string, int> marks;
marks["Srivijaya"] = 34;
marks["Vineetha"] = 56;
//marks["Srivijaya"] = 45;
marks.insert(pair<string, int>("Srivijaya" = 45));
return 0;
}
