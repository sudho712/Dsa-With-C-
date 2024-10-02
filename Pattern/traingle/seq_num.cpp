
#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=0; i<n; i++) //outer line
    {
       
        for(int j=1; j<i+1; j++) //inner line
        {
            cout<<j <<" ";   // print i+1
          
        }
        cout<<endl;
    }
    return 0;
    
}
