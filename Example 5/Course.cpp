#include "Course.h"
#include <iostream>

using namespace std;

Course::Course(string n)
{
    name = n;
}

Course::~Course()
{
    delete students[totalStudents--];
}

void Course::printCode()
{
    cout << name << endl;
}

void Course::printCourseList()
{
    for(int i = 0; i < totalStudents; i++)
    {
        students[i]->print();
    }
}
