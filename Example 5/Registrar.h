// Name: Bruno Stevaux.
// Email: 144894s@acadiau.ca

#ifndef REGISTRAR_H
#define REGISTRAR_H

#include <string>
#include "Course.h"

#define MAXSTUDENTS 1000
#define MAXCOURSES 1000

using namespace std;

class Student;
class Course;

class Registrar
{

    Course *courses[MAXCOURSES];
    Student *students[MAXSTUDENTS];

public:
    int totalStudents;
    int totalCourses;
    int nextID;

    Registrar();                             // done
    ~Registrar();                            // done
    void addStudent(Student *s);             // done
    void addCourse(Course *code);            // done
    void enroll(int studentID, string code); // done
    void drop(int studentID, string code);   // done
    Course *findCourse(string code);         // done
    Student *findStudent(int studentID);     // done
    void printStudents();                    // done
    void printCourses();                     // done
    void printStudentCourses();              // done
};

#endif