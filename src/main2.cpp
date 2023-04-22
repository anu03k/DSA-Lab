#include <iostream>
#include "../include/LinkedList.h"

using namespace std;

int main()
{

    Linkedlist mylist;
    mylist.addToHead(10);
    mylist.addToHead(1);

    mylist.addToHead(8);
    mylist.addToHead(6);
    mylist.addToHead(4);

    cout << "Linked List: ";
    mylist.traverse();
    cout << endl;

    mylist.removeFromHead();
    cout << "Linked List after remove from head: ";
    mylist.traverse();
    cout << endl;

    mylist.removeFromTail();
    cout << "Linked List after remove from tail: ";
    mylist.traverse();
    cout << endl;


    mylist.remove(6);

    cout << "Linked List after removing 6 : ";
    mylist.traverse();
    cout << endl;

    mylist.addToHead(9);
    cout << "Linked List after add to head : ";
    mylist.traverse();
    cout << endl;

    mylist.addToTail(7);
    cout << "Linked List after add to tail : ";
    mylist.traverse();
    cout << endl;
   int retrived = mylist.retrive(3);//retirve 3rd element
   cout<<"data at index 3 is :"<<retrived;

}