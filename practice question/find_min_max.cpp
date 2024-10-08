#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the no of elements ";
    cin >> n;

    int arr[n];

    cout << "Enter the Elements of the array";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min = arr[0];
    int max = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout<<"Maximum "<< max<<endl;
    cout<<"Minimum "<< min<<endl;
    return 0;
}