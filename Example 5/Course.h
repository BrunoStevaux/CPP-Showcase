// Name: Bruno Stevaux.
// Email: 144894s@acadiau.ca

#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
#include "Registrar.h"

using namespace std;

class Student;

class Course
{
    string name;
    int totalStudents;
    Student* students[1000];

public:
    friend class Registrar;
    Course(string code);
    ~Course();
    void printCode();
    void printCourseList();
    string getCode();

};

#endif