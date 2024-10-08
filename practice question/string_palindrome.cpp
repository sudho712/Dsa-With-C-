#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the String : ";
    cin>>str;

    bool ispal=true;
    int n=str.length();

    for(int i=0; i<n/2; i++)
    {
        if(str[i]!=str[n-1-i])
        {
            ispal=false;
        }
        if(ispal)
        {
            cout<<"The string is palindrome"<<endl;
        }
        else{
            cout<<"the String is not palindrome"<< endl;
        }
    }return 0;
}