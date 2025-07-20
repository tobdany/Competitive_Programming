#include <iostream>

using namespace std;

class Node {
    public:
        int value;
        Node* next;
        Node(int value) {
            this->value = value;
            next = nullptr;
        }
};

class LinkedList {
    private:
        Node* head;
        Node* tail;
        int length;
        
    public:
        LinkedList(int value) {
            Node* newNode = new Node(value);
            head = newNode;
            tail = newNode;
            length = 1;
        }

        ~LinkedList() {
            Node* temp = head;
            while (head) {
                head = head->next;
                delete temp;
                temp = head;
            }
        }

        void printList() {
            Node* temp = head;
            if (temp == nullptr) {
                cout << "empty";
            } else {
                while (temp != nullptr) {
                    cout << temp->value;
                    temp = temp->next;
                    if (temp != nullptr) {
                        cout << " -> ";
                    }
                }
            }
            cout << endl;
        }

        Node* getHead() {
            return head;
        }

        Node* getTail() {
            return tail; 
        }

        int getLength() {
            return length;
        }
        
        void makeEmpty() {
            Node* temp = head;
            while (head) {
                head = head->next;
                delete temp;
                temp = head;
            }
            tail = nullptr;
            length = 0;
        }

        void append(int value) {
            Node* newNode = new Node(value);
            if (head == nullptr) {
                head = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
            length++;
        }
        
        //algoritmo que sirve solo para saber si existe un loop
        Node* hasLoop(){
            Node* fast=head;
            Node* slow=head;
            while(fast && fast->next){
                fast=fast->next->next;
                slow=slow->next;
                if(fast==slow) return fast;
            }
            return nullptr;
        }

        Node* get(int index) {
            if (index < 0 || index >= length) return nullptr;
            Node* temp = head;
            for (int i = 0; i < index; ++i) {
                temp = temp->next;
            }
            return temp;
        }

        //algoritmo para saber donde está el loop
        Node* startingLoop(){
            Node* p = hasLoop(); //obtenemos donde existió la intersección
            Node* q = head;
            while(p!=q){
                p=p->next;
                q=q->next;
            }
            return p;
        }

};


int main(){
    
        LinkedList list(1);
        //list.append(1);
        list.append(2);
        list.append(3);
        list.append(4);
        list.append(5);
        list.append(6);
        list.append(7);
        list.append(8);
        list.append(9);
        list.append(10);
        //list.append(11);

        Node* tail = list.getTail();
        tail->next = list.get(5); //para que se agarre el de valor 6
        //list.printList();
        
        cout << "este es el valor del nodo que inicia el loop " << list.startingLoop()->value << "\n";  


}