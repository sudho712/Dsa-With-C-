#include<iostream>
using namespace std;
int main()
{
    int n=4;
    for(int i=1; i<=n; i++) //outer line  for(int i=o; i<n; i++)   or for(int i=1; i<=n-1; i++) 
    {
        for(int j=1; j<=n; j++) //inner line
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
    
}
