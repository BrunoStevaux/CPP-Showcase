// Name: Bruno Stevaux.
// Email: 144894s@acadiau.ca

#include <iostream>
#include "Registrar.h"
#include "Student.h"
#include "Course.h"
using namespace std;

// initialize variables
Registrar::Registrar()
{
    totalStudents = 0;
    totalCourses = 0;
    nextID = 10000;
}

// for each student, delete their courses.
// for each course, delete their students
Registrar::~Registrar()
{
    for (int i = 0; i < totalStudents; i++)
    {
        Student *s = students[i];
        // cout << "in reg deleting S " << s->name << endl;
        delete s;
    }
    for (int i = 0; i < totalCourses; i++)
    {
        Course *c = courses[i];
        // cout << "in reg deleting C " << c->name << endl;
        delete c;
    }
}

// add a student.
// we add 9999 to assign arrays to our "10,000" IDs.

void Registrar::addStudent(Student *s)
{
    students[totalStudents++] = s;
    s->ID = totalStudents + 9999;
    // cout << "Total Students: " << totalStudents << endl;
}

// Adds courses :-)
void Registrar::addCourse(Course *c)
{
    courses[totalCourses++] = c;
    // cout << "Total Courses: " << totalCourses << endl;
}

// Looks for a student. if found, return pointer to it.
// otherwise print it cant find it and return null.
Student *Registrar::findStudent(int id)
{
    for (int i = 0; i < totalStudents; i++)
    {
        if (students[i]->ID == id)
        {
            return students[i];
        }
    }
    cout << "student does not exist. ";
    return NULL;
}

//Same as above, but with courses.
Course *Registrar::findCourse(string code)
{
    for (int i = 0; i < totalCourses; i++)
    {
        if (courses[i]->name == code)
        {
            return courses[i];
        }
    }
    cout << "course does not exist. ";
    return NULL;
}

// uses find course and student to determine if it is
// possible to enroll a student.

// if student already in course, dont add.
void Registrar::enroll(int stuID, string code)
{
    Student *s = findStudent(stuID);
    Course *c = findCourse(code);

    if (s != NULL && c != NULL) // if both exist
    {

        for (int i = 0; i < c->totalStudents; i++)
        {
            if (s->ID == c->students[i]->ID) // if student arlready in course
            {
                cout << stuID << " already in " << code << endl;
                return;
            }
        }

        // add student to course and course to student, increment counters too.
        s->courses[s->totalCourses++] = c;
        c->students[c->totalStudents++] = s;
        cout << "enrolled " << stuID << " in " << code << endl;
    }
    else
    {
        cout << "could not enroll: " << stuID << " in " << code << endl;
    }
}

// prints all students
void Registrar::printStudents()
{
    for (int i = 0; i < totalStudents; i++)
    {
        students[i]->print();
    }
}

// prints all courses
void Registrar::printCourses()
{
    for (int i = 0; i < totalCourses; i++)
    {
        courses[i]->printCode();
    }
}

// drops coures
void Registrar::drop(int stuID, string code)
{
    cout << "DROPPING: " << stuID << " from " << code << endl;
    Student *s = findStudent(stuID);
    Course *c = findCourse(code);
    int studentPos;
    int coursePos;

    if (s != NULL && c != NULL)
    {
        for (int i = 0; i < c->totalStudents; i++)
        {
            // only remove if they are in class.
            if (s->ID == c->students[i]->ID) // MAKE SURE STUDENT IS IN CLASS
            {
                for (int i = 0; i < c->totalStudents; i++)
                {
                    if (c->students[i]->ID == stuID)
                        studentPos = i;
                }

                for (int i = 0; i < s->totalCourses; i++)
                {
                    if (s->courses[i]->name == code)
                        coursePos = i;
                }

                for (int i = studentPos; i < totalStudents; i++)
                    c->students[i] = c->students[i + 1];
                c->totalStudents--;

                for (int i = coursePos; i < s->totalCourses; i++)
                    s->courses[i] = s->courses[i + 1];
                s->totalCourses--;
            }
        }
    }
    else
    {
        cout << "could not drop: " << stuID << " from " << code << endl;
    }
}