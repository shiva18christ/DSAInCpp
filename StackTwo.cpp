#include <iostream>
using namespace std;

class StackTwo {
private:
    int* array;
    int top;
    int capacity;

public:
    StackTwo(int capacity) {
        this->array = new int[capacity];
        this->top = -1;
        this->capacity = capacity;
    }

    ~StackTwo() {
        delete[] array;
    }

    void push(int element) {
        if (top == capacity - 1) {
            cout << "Stack overflow" << endl;
            return;
        }
        array[++top] = element;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }
        top--;
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }
        for (int i = top; i >= 0; i--) {
            cout << array[i] << " ";
        }
        cout << "End of stack" << endl;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == capacity - 1;
    }
};

int main() {
    StackTwo stack(5);
    stack.push(4);
    stack.push(5);
    stack.push(6);
    stack.push(8);
    stack.push(10);
    stack.display();
    stack.pop();
    stack.display();
    return 0;
}
