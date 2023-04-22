#include <iostream>
#include "linkedList.h"

using namespace std;
// intialize the conftructor of class linked list
Linkedlist::Linkedlist()
{
    HEAD = nullptr;
    TAIL = nullptr;
}

// function defination
bool Linkedlist::isEmpty()
{
    if (HEAD == nullptr)
    {
        return true; /* code*/
    }
    else
        return false;
}

void Linkedlist::addToHead(int data)
{
    // create a new node
    Node *NewNode = new Node(data, HEAD);
    HEAD = NewNode; // head points to new node
}

void Linkedlist::addToTail(int data)
{
    // create new node
    Node *NewNode = new Node(data, nullptr); // since it TAIL ->next NewNode;
    TAIL = NewNode;
}
void Linkedlist::removeFromHead()
{
    Node *NodeToDelete = HEAD;
    HEAD = NodeToDelete->next; // head is also a ptr delete NodeToDelete;
    delete NodeToDelete;
}
void Linkedlist::removeFromTail()
{
    Node* NodeToDelete;
    if (HEAD == TAIL)
    {
        HEAD = TAIL = NULL;
    }

    else
    {
        Node *p = HEAD;
        NodeToDelete = TAIL;
        while (p->next != TAIL)
        {

            p = p->next;
        }
        TAIL = p;
        p->next = nullptr;
        
    }
    delete NodeToDelete;
}

void Linkedlist::traverse()
{
    Node *currentNode = HEAD; // Start from the head of the list

    // Traverse through the linked list and print data of each node
    while (currentNode != nullptr)
    {
        cout << currentNode->data << " "; // Print the data
        currentNode = currentNode->next;  // Move to the next node
    }

    cout << endl; // Print a newline after traversing the linked list
}
void Linkedlist::add(int data, Node *before)
{
    Node *newnode = new Node();
    newnode->data = data;
    newnode->next = before->next;
    before->next = newnode;
}
void Linkedlist::remove(int data1)
{
// //     if (!isEmpty)
// //     {
//         Node *p=HEAD;
//         Node *q= nullptr;
//         while (p->data != data1)
//         {
//             q = p;
//             p = p->next; /* code */
//         }
//         Node *NodeToDel = p;
//         q->next = p->next;
//         delete NodeToDel;
//     //}
Node* curr = HEAD;
        Node* prev = nullptr;

        while (curr != nullptr && curr->data != data1)
        {
            prev = curr;
            curr = curr->next;
        }

        if (curr == nullptr)
        {
            std::cout << "Value not found in list.\n";
        }
        else if (prev == nullptr)
        {
            HEAD = curr->next;
            delete curr;
        }
        else
        {
            prev->next = curr->next;
            delete curr;
        }
}
int Linkedlist ::retrive(int index, Node* head){
  Node* currNode = head;
    int count = 0;
    while (currNode != NULL) {
        if (count == index) {
            return currNode->data;
        }
        count++;
        currNode = currNode->next;
    }
    return -1;  // Return -1 if the index is out of range
}

