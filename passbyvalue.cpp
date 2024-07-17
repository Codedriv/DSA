#include <iostream>
using namespace std;
int changevalue(int z)
{
    z=100;
}
int main()
{
    int a=5;
    changevalue(a);// here the value will be printed as 5 and not 100 as 100 is only for the scope of changevalue function once we go to the main function memory assigned for this is deallocated
    cout<<a;
}