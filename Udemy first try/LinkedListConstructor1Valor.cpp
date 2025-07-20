#include <iostream>
using namespace std;
class Node{
    public:
            int value;
            Node* next;
    Node(int value){
        this->value=value;
        next=nullptr;
    }
            
};

class LinkedList{
    private:
    Node* head;
    Node* tail; //haciendo dos objetos?
    int length;

    public:
        LinkedList(int value){
            Node* newNode = new Node(value); //se guard+p su dirección en Node* new node pointer
            head=newNode;
            tail=newNode;
            length=1;

        }
};



int main(){
     LinkedList *myLinkedList=new LinkedList(4);


    return 0;
}