#include<iostream>
using namespace std;
int main()
{
    int a[3]={10,20,30};
    cout<<"\nenter the number to search in array:";
    int p;
    cin>>p;
    int ans=-1;
    for(int i=0;i<3;i++)
    {
        if(a[i]==p)
        {
           ans=i;
        }
        
    }
    cout<<ans;
}