#include <iostream>
using namespace std;

class QueueTwo {
private:
    int* array;
    int front;
    int rear;
    int capacity;

public:
    QueueTwo(int capacity) {
        this->array = new int[capacity];
        this->front = -1;
        this->rear = -1;
        this->capacity = capacity;
    }

    ~QueueTwo() {
        delete[] array;
    }

    void enqueue(int element) {
        if (rear == capacity - 1) {
            cout << "Queue overflow" << endl;
            return;
        }
        if (front == -1) front = 0;
        array[++rear] = element;
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty" << endl;
            return;
        }
        front++;
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty" << endl;
            return;
        }
        for (int i = front; i <= rear; i++) {
            cout << array[i] << " ";
        }
        cout << "End of queue" << endl;
    }

    bool isEmpty() {
        return front == -1 || front > rear;
    }

    bool isFull() {
        return rear == capacity - 1;
    }
};

int main() {
    QueueTwo queue(5);
    queue.enqueue(4);
    queue.enqueue(5);
    queue.enqueue(6);
    queue.enqueue(8);
    queue.enqueue(10);
    queue.display();
    queue.dequeue();
    queue.display();
    return 0;
}
