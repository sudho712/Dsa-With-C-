#include <iostream>
using namespace std;

#define MAX_SIZE 100
int stack[MAX_SIZE];
int top = -1;

void push(int item) {
    if (top == MAX_SIZE - 1) {  // Corrected condition to check overflow
        cout << "Overflow" << endl;        
    } else {
        stack[++top] = item;  // Increment top before using it to insert the item
        cout << item << " item inserted" << endl; // Fixed the output formatting
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        int item = stack[top--];  // Decrement top after using it
        cout << item << " item deleted" << endl;  // Fixed the output formatting
    }
}

void display() {
    if (top == -1) {
        cout << "Stack is empty" << endl;  // Corrected output statement
    } else {
        cout << "Stack elements: ";  // Added spacing for better output
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";  // Fixed the typo (cour -> cout)
        }
        cout << endl;  // Add a newline after displaying elements
    }
}

int main() {
    int choice, item;  // Corrected variable name from 'chice' to 'choice'
    cout << "1. Push \n2. Pop \n3. Display \n4. Exit" << endl;

    while (true) {  // Corrected control structure
        cout << "Your choice: ";
        cin >> choice;  // Added input for choice

        switch (choice) {  // Fixed the switch structure
            case 1:
                cout << "Enter value to push onto stack: ";
                cin >> item;
                push(item);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;  // Exit the program

            default:
                cout << "Invalid choice" << endl;  // Added newline for readability
        }
    }
}
