#include<iostream>
using namespace std;
int main()
{
    int n=4;
    for(int i=0; i<n; i++) //outer line
    {
        char ch='A';   // because all start line with A B c d endl ; A
        for(int j=0; j<n; j++) //inner line
        {
            cout<<ch;
            ch=ch+1;    //65+1
        }
        cout<<endl;
    }
    return 0;
    
}
