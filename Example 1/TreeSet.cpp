// Name: Bruno Stevaux.
// Email: 144894s@acadiau.ca
// Date: Oct / 07 / 2020

// Assignment 2

// - - - - - QUESTION - - - - - //
/*
Create a class TreeSet to hold a set of strings. TreeSets contain copies of the
strings inserted so that the strings cannot be changed while in the set.
(Changing the strings inside the set could break the binary search tree.) The 
strings are case sensitive, so "Hello" and "hello" are distinct within the set. 

TreeSet implements the following methods:

•bool add(const string& s) -- add s to the set, if it's not already there;
return true if the set changed, false otherwise •void clear() -- remove all
elements from the set •bool contains(const string& s) const -- test whether
s is in the set •bool isEmpty() const -- test whether the set is empty •bool
remove(const string& s) -- remove s from the set, if it was there; return
true if the set changed, false otherwise •int size() const -- return the
number of strings in the set •int toArray(string sa[]) const -- put the
elements of the set into the array sa; assume that sa has sufficient room
(it's the client's responsibility to check); you may place the strings in
any order that's convenient for you (the implementer) The class also
includes a zero-argument constructor (creating an empty set), a constructor
that takes an array of string and its size (creating a set containing each
element of the array), copy constructor, assignment operator, and destructor.
The copy constructor and assignment operator make deep copies.

TreeSet implements the set using a binary search tree. (The tree does not need
to be balanced.) The implementation of the tree node class is hidden from the
client. There are no memory leaks.
*/

// - - - - - CODE - - - - - //

#include <iostream>
#include <cstdlib>
// #include <strings>
#include "TreeSet.h"

// Constructor
LinkedList::LinkedList()
{
    std::cout << "Contructor called" << std::endl;
    head = NULL;
    current = NULL;
    temporary = NULL;
}

// Destructor
LinkedList::~LinkedList()
{
    std::cout << "Destructor called" << std::endl;

    current = head;

    while (current != NULL)
    {
        current = current->next;
        delete head;
        head = current;
    }
}

// Copy Constructor
LinkedList::LinkedList(const LinkedList &object)
{
    std::cout << "Copy contructor called" << std::endl;

    // if empty
    if (object.head == NULL)
    {
        return;
    }

    // start a new one and start copying
    nodePointer newTemp = object.head;

    head = new Node();
    head->data = newTemp->data;
    current = head;
    newTemp = newTemp->next;

    while (newTemp != NULL)
    {
        // create new node to append to end.
        current->next = new Node();
        current = current->next;
        current->data = newTemp->data;
        newTemp = newTemp->next;
    }
}

// Overloaded Assignment Operator
// Basically same as above, but different in that it's for assigning

LinkedList &LinkedList::operator=(const LinkedList &t)
{
    std::cout << "Overloaded assignment called" << std::endl;

    if (this == &t)
    {
        return *this;
    }

    nodePointer newTemp = t.head;

    head = new Node();
    head->data = newTemp->data;
    current = head;
    newTemp = newTemp->next;

    while (newTemp != NULL)
    {
        current->next = new Node();
        current = current->next;
        current->data = newTemp->data;
        newTemp = newTemp->next;
    }

    return *this;
}

// Array
LinkedList::LinkedList(std::string sa[], int size)
{
    std::cout << "Array assignment called" << std::endl;

    for (int i = 0; i < size; i++)
    {
        this->add(sa[i]);
    }
}

/* 
ADD

NOTES: We will be using LinkedList::contains( ... ) to see if item is already
in our list.
*/
bool LinkedList::add(const std::string &s)
{
    std::cout << "Adding \"" << s << "\" to list.";
    if (LinkedList::contains(s)) // already in list
    {
        std::cout << " (already in list)" << std::endl;
        return false;
    }
    else // not already in list
    {
        std::cout << " (not in list)" << std::endl;

        nodePointer newNode = new Node;
        // newNode->next = NULL;
        newNode->data = s;

        if (head != NULL)
        {
            current = head;
            while (current->next != NULL)
            {
                current = current->next;
            }

            current->next = newNode;
        }
        else
        {
            head = newNode;
        }

        return true;
    }
}

/* 
REMOVE

NOTES: We will be using LinkedList::contains( ... ) to see if item is already
in our list.
*/

bool LinkedList::remove(const std::string &s)
{
    std::cout << "Removing \"" << s << "\" from list.";

    nodePointer deletionNode = NULL;
    temporary = head;
    current = head;

    if (LinkedList::contains(s))
    {
        while (current != NULL && current->data != s)
        {
            temporary = current; // keeping our old node (one behind)
            current = current->next;
        }

        deletionNode = current;
        current = current->next;
        temporary->next = current;

        if (deletionNode == head)
        {
            head = head->next;
            temporary = NULL;
        }

        delete deletionNode;
        std::cout << std::endl;

        return true; // the node was deleted
    }

    else
    {
        std::cout << "\"" << s << "\""
                  << " Is not in the list. Item not deleted" << std::endl;
        return false; // the node was not deleted
    }
}

/* 
CONTAINS
*/

bool LinkedList::contains(const std::string &s) const
{
    nodePointer temporary;

    temporary = head;

    while (temporary != NULL)
    {
        if (temporary->data == s)
        {
            return true;
        }
        temporary = temporary->next;
    }
    return false;
}

/* 
SIZE
*/

int LinkedList::size() const
{
    int total = 0;

    nodePointer countingNode = new Node();
    countingNode = head;

    while (countingNode != NULL)
    {
        total++;
        countingNode = countingNode->next;
    }

    return total;
}

/* 
ISEMPTY

NOTES: Because of the way 
*/

bool LinkedList::isEmpty() const
{
    if (head == NULL)
        return true;
    return false;
}

void LinkedList::clear()
{
    nodePointer node1 = head;
    while (node1 != NULL)
    {
        nodePointer node2 = node1->next;
        delete node1;
        node1 = node2;
    }
    head = 0;
}

/*
PRINTLIST

NOTES: Used for debugging and seeing the list. It's useful, I promise.
*/

void LinkedList::printList()
{
    nodePointer node = head;

    while (node != NULL)
    {
        std::cout << node->data << " ";
        node = node->next;
    }
    std::cout << std::endl;
}
