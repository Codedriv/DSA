#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"\nenterr a:";
    cin>>a;
    cout<<"\nenter b:";
    cin>>b;
    char operators;
    cout<<"\nenter operator (+,-,*,/):";
    cin>>operators;
    switch(operators)
    {
        case '+':
        cout<<"the addition is:"<<a+b;
        break;
        case '-':
        cout<<"\nthe substraction is:"<<a-b;
        break;
        case '*':
        cout<<"\nthe multiplication is:"<<a*b;
        break;
        case '/' :
        cout<<"\nthe division is:"<<a/b;
        break;
        return 0;


    }
}