#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class Person
{
protected:
    string name;

public:
    void setName(string n)
    {
        name = n;
    }
};

class Student : public Person
{
private:
    int rollNo;
    int marks;

public:
    Student(string n,int r,int m);

    void display();

    string getName();

    int getRollNo();

    int getMarks();
};

#endif