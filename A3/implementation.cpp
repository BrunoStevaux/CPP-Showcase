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
#include <cstdlib>

// Initializes to zeroes incase user forgets to set boundaries
setOper::setOper()
{
  lowerBoundary = 0;
  upperBoundary = 0;
}

// Sets the upper and lower boundaries of a set
void setOper::set(double lower, double upper)
{
  upperBoundary = upper;
  lowerBoundary = lower;
}

// Gets the upper and lower boundary of a set
void setOper::get()
{
  std::cout << "Upper: " << upperBoundary << std::endl
            << "Lower: " << lowerBoundary << std::endl;
}

// Gets the upper boundary of a set
double setOper::getUpper()
{
  return upperBoundary;
}

// Gets the lower boundary of a set
double setOper::getLower()
{
  return lowerBoundary;
}

// Checks if number is in a set (inclusive)
bool belongs_(double number, setOper set)
{
  if (set.getLower() <= number && number <= set.getUpper())
    return 1;
  return 0;
}

// Uses belongs to check if number is in BOTH sets
bool intersection_(double number, setOper set1, setOper set2)
{
  // std::cout << "is " << number
  //           << " between (" << set1.getLower()
  //           << " : " << set1.getUpper() << ") and ("
  //           << set2.getLower() << " : "
  //           << set2.getUpper() << ")" << std::endl;
  if (belongs_(number, set1) && belongs_(number, set2))
    return 1;
  return 0;
}

// Uses belongs to check if number is in EITHER set
bool union_(double number, setOper set1, setOper set2)
{
  // std::cout << "is " << number
  //           << " between (" << set1.getLower()
  //           << " : " << set1.getUpper() << ") or ("
  //           << set2.getLower() << " : "
  //           << set2.getUpper() << ")" << std::endl;
  if (belongs_(number, set1) || belongs_(number, set2))
    return 1;
  return 0;
}