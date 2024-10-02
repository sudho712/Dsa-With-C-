#include<iostream>
using namespace std;

// Define the function `add` outside of `main`
int add(int n, int m)
{
    int sum = n + m;
    return sum;
}

int main()
{
    int n = 5;  // Example value for n
    int m = 10; // Example value for m

    // Call the add function with two arguments
    int result = add(n, m);
    
    cout << "Sum: " << result << endl;  // Display the result

    return 0;
}
