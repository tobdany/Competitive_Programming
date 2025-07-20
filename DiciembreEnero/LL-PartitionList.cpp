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
        int length;
        
    public:
        LinkedList(int value) {
            Node* newNode = new Node(value);
            head = newNode;
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
            length = 0;
        }

        void append(int value) {
            Node* newNode = new Node(value);
            if (head == nullptr) {
                head = newNode;
            } else {
                Node* currentNode = head;
                while (currentNode->next != nullptr) {
                    currentNode = currentNode->next;
                }
                currentNode->next = newNode;
            }
            length++;
        }
        
        void partitionList(int x) {
    // Return if the list is empty
    if (head == nullptr) return;
 
    // Create dummy nodes for two lists
    Node little(0);
    Node bigger(0);
    // Initialize pointers for two lists
    Node* littlePointer = &little;
    Node* biggerPointer = &bigger;
    // Initialize the current pointer
    Node* current = head;
 
    // Iterate through the list
    while (current != nullptr) {
        // If the value is less than x
        if (current->value < x) {
            littlePointer->next = current;
            littlePointer = current;
        } else { // If the value is >= x
            biggerPointer->next = current;
            biggerPointer = current;
        }
        // Move to the next node
        current = current->next;
    }
 
    // Terminate the second list
    biggerPointer->next = nullptr;
    // Connect the two lists
    littlePointer->next = bigger.next;
    // Update the head of the list
    head = little.next;
}



        //   +======================================================+
        //   |                 WRITE YOUR CODE HERE                 |
        //   | Description:                                         |
        //   | - Partition list around value x                      |
        //   | - Return type: void                                  |
        //   |                                                      |
        //   | Tips:                                                |
        //   | - Create two dummy nodes for two new lists           |
        //   | - One list for nodes less than x                     |
        //   | - Another list for nodes greater or equal to x       |
        //   | - Loop through original list                         |
        //   | - Assign nodes to new lists based on value           |
        //   | - Merge the two new lists                            |
        //   | - Update the original list's head                    |
        //   +======================================================+

};

int main(){
    LinkedList list(3);
        list.append(8);
        list.append(5);
        list.append(10);
        list.append(2);
        list.append(1);
        list.printList();
        list.partitionList(5);
        list.printList();
}


