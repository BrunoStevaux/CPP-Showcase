// Name: Bruno Stevaux.
// Email: 144894s@acadiau.ca

#include <iostream>
#include <cstdlib>
#include "LL.h"

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
