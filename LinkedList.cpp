#include<iostream>
using namespace std;
class LinkedList{
    struct Node{
        public:
        int data;
        Node* next;
        public:
        Node(int data){
            this ->data=data;
            this ->next=nullptr;
        }
    };
    Node* head;
   public:
    LinkedList(){
        this ->head=nullptr;
    }
    void addFirst(int element){
        Node* node=new Node(element);
        if(head==nullptr){
            head=node;
            return;
        }
        node ->next=head;
        head=node;
    }
    void addLast(int element){
        Node* node=new Node(element);
        if(head==nullptr){
            head=node;
            return;
        }
        Node* current=head;
        while(current ->next!=nullptr){
            current=current ->next;
        }
        current ->next=node;
    }
    void display(){
        Node* current=head;
        if(head==nullptr){
            cout<<"The list is empty";
            return;
        }
        while(current !=nullptr){
            cout<<current ->data<<" ";
            current=current ->next;
        }
        cout<<endl;
    }
};
int main(){
    LinkedList list;
    list.addFirst(10);
    list.addFirst(5);
    list.addLast(15);
    list.display();
}