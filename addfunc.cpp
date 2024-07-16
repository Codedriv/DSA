#include<iostream>
using namespace std;
int add(int a,int b)
{
    
    int sum=0;
    sum=a+b;
    cout<<sum;
}
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    add(a,b);
}