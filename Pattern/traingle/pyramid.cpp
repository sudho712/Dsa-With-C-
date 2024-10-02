#include<iostream>
using namespace std;

int main()
{
    int n = 4;
    
    for(int i = 0; i < n; i++)
    {
        // Print spaces (n - i - 1 spaces)
        for(int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        
        // Print increasing numbers from 1 to i+1
        for(int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }
        
        // Print decreasing numbers from i to 1
        for(int j = i; j > 0; j--)
        {
            cout << j;
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}
