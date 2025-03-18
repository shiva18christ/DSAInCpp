#include<iostream>
using namespace std;
class Queue{
    private:
    int* arr;
    int head;
    int tail;
    int size;
    public:
    Queue(int capacity){
        this ->arr=new int [size];
        this ->head=0;
        this ->tail=-1;
        this ->size=capacity;
    }
    void enqueu(int element){
        if(tail==size-1){
            cout<<"Queue is full";
        }
        tail++;
        arr[tail]=element;
    }
    void dequeue(){
        if (tail==-1){
            cout<<"Queue is empty";
        }
        cout<<arr[head]<<" has been removed from the queue";
        head++;
    }
    void peek(){
        if(tail==-1){
            cout<<"Queue is empty";
        }
        cout<<arr[head];
    }
    void display(){
        if(tail==-1){
            cout<<"Queueu is empty";
        }
        for(int i=head;i<=tail;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    Queue queue(5);
    queue.enqueu(10);
    queue.enqueu(20);
    queue.enqueu(30);
    queue.display();
    queue.dequeue();
    queue.display();
}