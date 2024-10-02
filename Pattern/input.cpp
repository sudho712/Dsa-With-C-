#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Loop Leanght to print : ";
    cin>>n ;
    for(int i=1; i<=n; i++) //outer line
    {
        for(int j=1; j<=n; j++) //inner line
        {
            cout<<j <<" ";
        }
        cout<<endl;
    }
    return 0;
    
}
