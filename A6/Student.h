// Name: Bruno Stevaux.
// Email: 144894s@acadiau.ca

#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "Course.h"
#include "Registrar.h"

using namespace std;

class Course;

class Student
{
    int ID;
    int totalCourses;
    string name;
    Course *courses[100];

public:
    friend class Registrar;
    Student(string name);
    ~Student();
    void print();
    void printCourses();
};

#endif