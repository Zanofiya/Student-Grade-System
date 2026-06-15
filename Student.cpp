#include "Student.h"

Student::Student(string n,int r,int m)
{
    name = n;
    rollNo = r;
    marks = m;
}

void Student::display()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No: "<<rollNo<<endl;
    cout<<"Marks: "<<marks<<endl;
}

string Student::getName()
{
    return name;
}

int Student::getRollNo()
{
    return rollNo;
}

int Student::getMarks()
{
    return marks;
}