
#include<iostream>
using namespace std;
int main()
{
    int n=4;
    for(int i=0; i<n; i++) //outer line
    {
       
        for(int j=0; j<i+1; j++) //inner line
        {
            cout<<" *";
          
        }
        cout<<endl;
    }
    return 0;
    
}