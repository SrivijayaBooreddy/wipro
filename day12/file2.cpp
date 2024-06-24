#include <iostream>
#include <unistd.h>
#include <thread>
using namespace std;
void print()
{
printf("%s : Process ID : %d \n", __func__, getpid());
cout << "Thread ID in print " << this_thread::get_id() << endl;
}
int main()
{
printf("%s : Process ID : %d \n", __func__, getpid());
cout << "Thread ID in print " << this_thread::get_id() << endl;
print();
tm join();

return 0;
}
