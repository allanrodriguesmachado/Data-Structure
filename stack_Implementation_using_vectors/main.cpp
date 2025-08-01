#include <iostream>
#include "stack.h"

using namespace std;

int main() {
    stack myStack;
    typeItem item;
    int options;

    do  {
        cout << "Choose an option:" << endl;
        cout << "1. Push item" << endl;
        cout << "2. Pop item" << endl;
        cout << "3. Print stack" << endl;
        cout << "4. Check if stack is empty" << endl;
        cout << "5. Check if stack is full" << endl;
        cout << "6. Get stack length" << endl;
        cout << "0. Exit" << endl;
        cin >> options;

        switch (options) {
            case 1:
                cout << "Enter item to push: ";
                cin >> item;
                myStack.push(item);
                break;
            case 2:
                item = myStack.pop();
                // if (item != -1) {
                //     cout << "Popped item: " << item << endl;
                // }
                break;
            case 3:
                myStack.printStack();
                break;
            case 4:
                cout << (myStack.isEmpety() ? "Stack is empty." : "Stack is not empty.") << endl;
                break;
            case 5:
                cout << (myStack.isFull() ? "Stack is full." : "Stack is not full.") << endl;
                break;
            case 6:
                cout << "Stack length: " << myStack.length() << endl;
                break;
            case 0:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid option, please try again." << endl;
        }
    }while (options != 0);
}