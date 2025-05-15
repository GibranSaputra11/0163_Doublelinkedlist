#include <iostream>
#include <string>
using namespace std;

class Node{
    public:
        int noMhs;
        Node *next;
        Node *prev;
};

class DoubleLinkedList{
    private:
        Node *STARAT;
    
    public:
        DoubleLinkedList(){
            STARAT = NULL;
        }
        
        void addNote(){
            int nim;
            string nm;
            cout << "\nEnter the roll number of the student: ";
            cin >> nim;

            // Step 1 : Allocate memory for new node
            Node *newNode = new Node();

            // Step 2 : Assign value to the data fields
            newNode->noMhs = nim;

            // Step 3 : Insert at beginning if list is empty or nim is smallest
            if (STARAT == NULL || nim <= STARAT->noMhs){
                if (STARAT != NULL && nim == STARAT->noMhs){
                    cout << "\nDuplicate number not allowed" << endl;
                    return;
                }
                // Step 4 : newNode.next = START
                newNode->next = STARAT;

                // Step 5 : START.prev = newNode (if START exists)
                if (STARAT != NULL)
                    STARAT->prev = newNode;

                // Step 6 : newNode.prev = NULL
                newNode->prev = NULL;
            }
        }

};

int main(){

}