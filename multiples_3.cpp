#include<iostream>
using namespace std;
int main()
{
    int n;
    n=1;
    
    while(n<=10)
    {
        
        if(n%5==0)
        {
            continue;
        }
        cout<<n<<endl;
        n++;
    }
    return 0;
    
}