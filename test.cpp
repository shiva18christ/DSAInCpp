#include<iostream>
using namespace std;
class LinkedList{
    struct Node{
        public:
        int data;
        Node* next;
        public:
        Node(int value){
             this ->data=value;
             this ->next=nullptr;
        }
    };
    Node *head;
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
    void deleteFirst(){
        Node * current=head;
        if(head==nullptr){
            cout<<"The list is empty";
            return;
        }
        head=head ->next;
        return;
        
    }
    void display(){
        Node* current=head;
        if(head==nullptr){
            cout<<" The list is empty";
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
    list.addFirst(20);
    list.display();
    list.deleteFirst();
    list.display();
    
}