#include<iostream>
using namespace std;
class Stack{
  private:
  int* arr;
  int head;
  int size;
  public:
  Stack(int capacity){
    this ->arr=new int(size);
    this ->head=-1;
    this ->size=capacity;
  }
  void push(int element){
    if(head==size-1){
      cout<<"Stack overflow";
    }
    head++;
    arr[head]=element;
  }
  void pop(){
    if(head==-1){
      cout<<"Stack underflow";
    }
    cout<<arr[head]<<" pooped from the stack";
    head--;
  }
  void peek(){
    if(head==-1){
      cout<<"Stack is empty";
    }
    cout<<arr[head];
  }
  void display(){
    if(head==-1){
      cout<<"Stack is empty";
    }
    for(int i=0;i<=head;i++){
      cout<<arr[i]<<" ";
    }
  }
};
int main(){
  Stack stack(5);
  stack.push(10);
  stack.push(20);
  stack.push(30);
  stack.push(40);
  stack.display();
  stack.pop();
  stack.display();
  stack.peek();
}