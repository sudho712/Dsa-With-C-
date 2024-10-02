#include <iostream>
using namespace std;

// Function to calculate factorial
int fact(int n) {
    if (n <= 1) return 1; // Base case
    return n * fact(n - 1); // Recursive case
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int ans = fact(n);
        cout << "Factorial of " << n << " is: " << ans << endl;
    }
    
    return 0;
}
