/*
    *****
    *   *
    *   *
    *****
*/

#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cin>>row;
    cin>>col;
    int i,j;
    for(i=1;i<=col;i++)
    {
        for(j=1;j<=row;j++)
        {
            if(j==1 || j == row || i== 1 || i == col)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}