#include <iostream>
#include <fstream>
#include <vector>

#include "Student.h"

using namespace std;

int main()
{
    vector<Student> students;

    students.push_back(
        Student("Aafrin",101,90)
    );

    students.push_back(
        Student("Sara",102,85)
    );

    ofstream file("students.txt");

    for(auto s : students)
    {
        file
        << s.getName() << " "
        << s.getRollNo() << " "
        << s.getMarks()
        << endl;
    }

    file.close();

    cout<<"Student Records Saved"<<endl;

    for(auto s : students)
    {
        s.display();
        cout<<endl;
    }

    return 0;
}