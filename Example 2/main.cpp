// Name: Bruno Stevaux.
// Email: 144894s@acadiau.ca

// Assignment 3

// NOTES: I am assuming 'avg' will be an int as all other variable
//        types are also ints.

// - - - - - QUESTION - - - - - //
/*
Implement a class setOper, then provides several simple set operations.
The class only needs to deal with sets that are closed intervals specified
by two real numbers; for example, the pair( 2.5, 4.5) represents the
interval [2.5, 4.5]. The following operations should be supported:

Check if the value x belongs to the given interval.
Check if the value x belongs to the intersection of two intervals.  
Check if the value x belongs to the union of two intervals.
test this class  in the main program.

Hand in a zip file containing:

•header and implementation files for the setOper class
•the main program source code.

*/

// - - - - - CODE - - - - - //

#include "header.h"
#include <iostream>

int main()
{
  setOper s1, s2;

  s1.set(2, 5);
  s2.set(-1, 4);

  s1.get();
  std::cout << "Checking from i = -10 to 10 if i belongs in s1" << std::endl;

  for (double i = -10; i < 10; i++)
  {
    std::cout << i << ": " << belongs_(i, s1) << std::endl;
  }

  s2.get();
  std::cout << "Checking from i = -10 to 10 if i belongs in s2" << std::endl;

  for (double i = -10; i < 10; i++)
  {
    std::cout << i << ": " << belongs_(i, s2) << std::endl;
  }

  s1.get();
  s2.get();
  std::cout << "Checking from i = -10 to 10 if i belongs in intersection s1, s2" << std::endl;

  for (double i = -10; i < 10; i++)
  {
    std::cout << i << ": " << union_(i, s1, s2) << std::endl;
  }

  s1.get();
  s2.get();
  std::cout << "Checking from i = -10 to 10 if i belongs in union s1, s2" << std::endl;

  for (double i = -10; i < 10; i++)
  {
    std::cout << i << ": " << union_(i, s1, s2) << std::endl;
  }

  return 0;
}