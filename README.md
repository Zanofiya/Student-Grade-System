# Student Grade Management System

## Author

Aafrin Zanofiya Fathima M

RMK College of Engineering and Technology

## Objective

This project is a Student Grade Management System developed in C++. It demonstrates Object-Oriented Programming concepts such as classes, inheritance, STL containers, and file persistence.

## Features

* Add student records
* Store student details
* Display student information
* Save records to a file
* Use inheritance between Person and Student classes
* Use STL vector for data storage

## Technologies Used

* C++
* STL Vector
* File Handling
* Object-Oriented Programming

## Project Structure

Student-Grade-System

* main.cpp
* Student.cpp
* Student.h
* students.txt
* README.md
* Makefile

## Design Decisions

* Person class is used as a base class.
* Student class inherits from Person.
* vector<Student> is used to store student records dynamically.
* students.txt provides persistent storage for student data.

## Build Instructions

Compile:

g++ main.cpp Student.cpp -o StudentSystem

Run:

.\StudentSystem.exe

## Sample Output

Student Records Saved

Name: Aafrin
Roll No: 101
Marks: 90

Name: Sara
Roll No: 102
Marks: 85

## Concepts Demonstrated

* Classes
* Inheritance
* Encapsulation
* STL Containers
* File Persistence

## Conclusion

This project successfully demonstrates the implementation of a Student Grade Management System using modern C++ programming concepts.
