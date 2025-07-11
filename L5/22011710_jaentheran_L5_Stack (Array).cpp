#include <iostream>
#include <string>
using namespace std;

class Stack {
private:
    string arr[100]; 
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(string name) {
        if (top == 99) {
            cout << "Stack is full!" << endl;
        } else {
            arr[++top] = name;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
        } else {
            top--;
        }
    }

    void peek() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
        } else {
            cout << "Top element when peek: " << arr[top] << endl;
        }
    }

    void isEmpty() {
        cout << "Stack is empty!" << endl;
    }

    void isFull() {
        cout << "Stack is not full!" << endl;
    }

    void display_stack() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
        } else {
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " -> ";
            }
            cout << "NULL" << endl;
        }
    }
};

int main() {
    Stack stack;

    stack.push("Ali");
    stack.push("Ahmed");
    stack.push("Alice");

    cout << "Stack: ";
    stack.display_stack();

    stack.pop();

    cout << "Stack after popping: ";
    stack.display_stack();

    stack.peek();
    stack.isFull();
    return 0;
}