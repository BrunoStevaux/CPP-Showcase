// Name: Bruno Stevaux.
// Email: 144894s@acadiau.ca

/*
 * File:    A6Driver.cpp
 * Author:  
 * Date:    2019/03/16
 * Version: 1.0
 *
 * Purpose: This driver class is used to test the basic operations that the
 *          Registrar class is able to perform. There are students added
 *          to various courses that were created and then it is shown
 *          they were added by printing out that they were. Then a student
 *          is removed from a course and the course list is printed
 *          again to show that someone was removed. After this everything
 *          is cleaned up and using "valgrind" to check for memory leaks
 *          we can see that there aren't any.
 */


/*

READ ME READ ME READ ME READ ME READ ME 
READ ME READ ME READ ME READ ME READ ME 
READ ME READ ME READ ME READ ME READ ME 
READ ME READ ME READ ME READ ME READ ME 
READ ME READ ME READ ME READ ME READ ME 

I AM GONNA SAY THIS HERE SO PLEASE READ IT. ALL STUDENT
IDS ARE STORED ACCORDINGLY IN ARRAY.

10,000 -> 0
10,001 -> 1

...

10,100 -> 100

First student added (slot 0) wil be given the ID of 10,000.

READ ME READ ME READ ME READ ME READ ME 
READ ME READ ME READ ME READ ME READ ME 
READ ME READ ME READ ME READ ME READ ME 
READ ME READ ME READ ME READ ME READ ME 
READ ME READ ME READ ME READ ME READ ME 

*/

#include "Student.h"
#include "Course.h"
#include "Registrar.h"
#include <iostream>

using namespace std;

int
main()
{
    Registrar * reg = new Registrar();
    Student * s1 = new Student("Justin Hiltz");
    reg->addStudent(s1);
    Student * s2 = new Student("Haiyi Zhang");
    reg->addStudent(s2);
    Student * s3 = new Student("Jack Bainbridge");
    reg->addStudent(s3);
    Student * s4 = new Student("Will Knowling");
    reg->addStudent(s4);
    Student * s5 = new Student("Jill Oldreive");
    reg->addStudent(s5);
    Course * c1 = new Course("COMP 3773");
    reg->addCourse(c1);
    Course * c2 = new Course("COMP 2103");
    reg->addCourse(c2);
    Course * c3 = new Course("COMP 4773");
    reg->addCourse(c3);

    reg->enroll(10000, "COMP 4773");
    reg->enroll(10000, "COMP 4773a");
    reg->enroll(10000, "COMP 2103");
    reg->enroll(10000, "COMP 3773");
    reg->enroll(10000, "COMP 3773");

    reg->enroll(10001, "COMP 3773");
    reg->enroll(10001, "COMP 4773");

    reg->enroll(10002, "COMP 3773");
    reg->enroll(10003, "COMP 4773");
    reg->enroll(10004, "COMP 2103");

    s1->print();
    s1->printCourses();
    cout << endl;
    s2->print();
    s2->printCourses();
    cout << endl;
    s3->print();
    s3->printCourses();
    cout << endl;
    s4->print();
    s4->printCourses();
    cout << endl;
    s5->print();
    s5->printCourses();
    cout << endl << endl;

    c1->printCode();
    c1->printCourseList();
    cout << endl;
    c2->printCode();
    c2->printCourseList();
    cout << endl;
    c3->printCode();
    c3->printCourseList();
    cout << endl << endl;

    reg->drop(10003, "COMP 4773");
    reg->drop(1, "COMP 4773");
    reg->drop(10003, "COMP 4773a");

    c3->printCode();
    c3->printCourseList();
    cout << endl << endl;

    s4->print();
    s4->printCourses();
    cout << endl;

    c3->printCode();
    c3->printCourseList();
    cout << endl;


    reg->printStudents();
    reg->printCourses();
    delete reg;
    return EXIT_SUCCESS;
}
