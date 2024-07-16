/*
   *****
   ****
   ***
   **
   *
*/
#include<iostream>
using namespace std;
int main()
{
    int row,col;
    int i,j;
    cin>>col;
    int n=col;
    
    for(i=1;i<=col;i++)
    {
        for(j=1;j<=n-i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}