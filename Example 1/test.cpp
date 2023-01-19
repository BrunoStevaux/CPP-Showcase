#include <iostream>
#include "TreeSet.h"
using namespace std;

int main()
{
    LinkedList SLL1, SLL2;

    string a = "Hello";
    string b = "World";
    string c = "!";
    string d = "?";

    cout << "Is SLL empty? " << SLL1.isEmpty() << endl;

    SLL1.clear();

    SLL1.add(a);
    SLL1.add(b);
    SLL1.add(c);
    SLL1.add(d);
    SLL1.add(d);
    SLL1.add(d);

    // SLL.add(c);

    SLL1.printList();

    SLL1.remove(a);
    SLL1.remove(a);

    SLL2 = SLL1;
    SLL1.clear();

    SLL2.printList();
    SLL1.printList();

    LinkedList SLL3 = SLL2;
    SLL3.printList();

    string arr[] = {"A",
                    "B",
                    "C",
                    "D",
                    "5",
                    "5"};

    LinkedList SLL4(arr, 6);

    SLL4.printList();
    return 0;
}