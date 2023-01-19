#ifndef TREESET_H
#define TREESET_H

class LinkedList
{
private:
    typedef struct Node
    {
        std::string data;
        Node *next;
    } * nodePointer;

    nodePointer head = nullptr;
    mutable nodePointer current = nullptr;
    nodePointer temporary = nullptr;

public:
    LinkedList();                               // done
    ~LinkedList();                              // done
    LinkedList(std::string sa[], int size);     // done
    LinkedList(const LinkedList &object);       // done
    LinkedList &operator=(const LinkedList &t); // done
                                                // done
    bool add(const std::string &s);             // done
    void clear();                               // done
    bool contains(const std::string &s) const;  // done
    bool isEmpty() const;                       // done
    bool remove(const std::string &s);          // done
    int size() const;                           // done
    int toArray(std::string sa[]) const;        // done
    void printList();                           // done
};

#endif
