#ifndef Linked_list_h
#define Linked_list_h

class Node{
    public:
    int data;
    Node* next; //object pointer
    //default constructor
    Node(){next= nullptr;}
    Node(int data){ this->data=data;}
    Node(int data, Node* next){

        this->data =data;
        this->next = next;
    }



};

// a class linked list
class Linkedlist{
public:
Node* HEAD = nullptr;
Node* TAIL = nullptr;
//function:
Linkedlist();//constructor
bool isEmpty();
void addToHead (int data);
void addToTail (int data);
 void removeFromHead (); 
 void removeFromTail ();
void remove (int data);
 void search (int data);

int retrive (int index , Node* HEAD);
 void traverse();
 void add (int data, Node* before); //since before


};
#endif