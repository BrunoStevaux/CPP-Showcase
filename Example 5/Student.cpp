// Name: Bruno Stevaux.
// Email: 144894s@acadiau.ca

#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(string n)
{
    name = n;
}

Student::~Student()
{
    delete courses[totalCourses--];
}

void Student::print()
{
    cout << "Name: " << name << "\tID: " << ID << endl;
}

void Student::printCourses()
{
    for (int i = 0; i < totalCourses; i++)
    {
        courses[i]->printCode();
    }
    cout << endl;
}