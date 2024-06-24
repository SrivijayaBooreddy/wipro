#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <set>
#include <list>
using namespace std;

int main()
{
FILE *fp = fopen("names1.txt", "r");
char c;
fseek(fp, -5, SEEK_END);
while( (c = fgetc(fp)) != EOF)
{
   cout <<ftell(fp) << " " << c << endl;
}
fclose(fp);

ifstream ifile("names1.txt");
ifile.seekg(5, ios::beg);
while( (c = ifile.get() ) != EOF)
{
    cout <<ifile.tellg() <<" "<< c << endl;
}

return 0;
}
