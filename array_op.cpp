#include<iostream>
using namespace std;
int sum()
{
    int p[5];
    int m=sizeof(p)/sizeof(p[0]);
    int s=0;
    for(int i=0;i<3;i++)
    {
        cout<<"\nenter elements in array:";
        cin>>p[i];
    }
    for(int j=0;j<3;j++)
    {
       s=s+p[j];
    }
    cout<<"\nsum is:"<<s;
}
int main()
{
    int a[]={1,2,3};
    int s;
    s=sizeof(a)/sizeof(a[0]);
    cout<<sizeof(a)<<endl;
    cout<<a[0]<<endl;
    //for loop for traversing
    for(int i=0;i<s;i++)
    {
        cout<<a[i]<<endl;
    }
    //for each loop
    for(int ele:a)
    {
        cout<<a[ele]<<endl;
    }
    //while loop for traversing
    int i=0;
    while(i<s)
    {
        cout<<a[i]<<endl;
        i++;
    }
    sum();
}