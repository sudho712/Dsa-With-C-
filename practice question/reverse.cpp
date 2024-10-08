#include<iostream>
using namespace std;
int main()
{
    int n;
    int i;
    cout<<"Enter thw no of element ";
    cin>>n;
    int arr[n];

    cout<<"Enter the elements of thee array ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Reversed Array";
    for(n=n-1; i>=0; i--)
    {
        cout<<arr[i] <<" ";
    }
    return 0;
}