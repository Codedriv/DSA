#include<iostream>
using namespace std;
int main()
{
    int cp,sp;
    cout<<"\nenter the cost price:";
    cin>>cp;
    cout<<"\nenter the selling price:";
    cin>>sp;
    if(sp>cp)
    {
        int c;
        c=sp-cp;
        cout<<"profit is:"<<c;
    }
    else{
        int l;
        l=cp-sp;
        cout<<"\n loss is:"<<l;
    }
}