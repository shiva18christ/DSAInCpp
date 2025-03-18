#include <iostream>
#include <vector>
using namespace std;

class SwitchableStructure {
private:
    vector<int> array;
    int size;
    int capacity;
    bool isStack;

public:
    SwitchableStructure(bool startAsStack, int capacity) {
        this->capacity = capacity;
        this->size = 0;
        this->isStack = startAsStack;
        array.resize(capacity);
    }

    void switchMode() {
        isStack = !isStack;
        cout << "Switched to " << (isStack ? "Stack" : "Queue") << " mode." << endl;
    }

    void add(int element) {
        if (size == capacity) {
            cout << "Structure is full" << endl;
            return;
        }
        array[size++] = element;
    }

    void remove() {
        if (size == 0) {
            cout << "Structure is empty" << endl;
            return;
        }
        if (isStack) {
            cout << "Popped: " << array[--size] << endl;
        } else {
            cout << "Dequeued: " << array[0] << endl;
            for (int i = 1; i < size; i++) {
                array[i - 1] = array[i];
            }
            --size;
        }
    }

    void display() {
        if (size == 0) {
            cout << "Structure is empty" << endl;
            return;
        }
        cout << "Elements: ";
        for (int i = 0; i < size; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    SwitchableStructure structure(true, 10);
    structure.add(1);
    structure.add(2);
    structure.add(3);
    structure.display();
    structure.remove();
    structure.display();
    structure.switchMode();
    structure.add(4);
    structure.add(5);
    structure.display();
    structure.remove();
    structure.display();
    return 0;
}
