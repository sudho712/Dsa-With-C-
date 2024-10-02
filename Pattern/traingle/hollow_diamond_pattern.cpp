#include<iostream>
using namespace std;

int main()
{
    int n = 4; // Number of rows for the pyramid

    for (int i = 0; i < n; i++)
    {   
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // Print the first star
        cout << "*";

        // For rows other than the first one, print hollow space or stars
        if (i != 0)
        {
            // Hollow space between stars
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " "; // Space between stars
            }

            // Print the second star at the end of the row
            cout << "*";
        }

        // Move to the next line
        cout << endl;
    }

    // Print the base of the pyramid (last row with full stars)
    for (int i = 0; i < 2 * n - 1; i++)
    {
        cout << "*";
    }

    return 0;
}
