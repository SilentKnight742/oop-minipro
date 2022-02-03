#include <iostream>
#include <fstream>
#include <string.h>
// #include<stdio.h>
// #include<stdlib.h>
// #include<conio.h>
using namespace std;

class Book
{
public:
    string bookNumber;
    string authorName;
    string bookName;

    // void getBookDetails
};

class Student
{
private:
    string studentID;
    string studentName;

public:
    void acceptStudentDetails()
    {
        cout << "Enter the Student ID: \n";
        cin >> studentID;
        cin.ignore();
        cout << "Enter the Student Name: \n";
        getline(cin, studentName);
    }

    void displayStudentDetails()
    {
        cout << "\n|Student Name|\t\t|Student_ID|\n\n";
        cout << studentName << "\t\t" << studentID;
    }

    string getStudentID()
    {
        return studentID;
    }

    string getStudentName()
    {
        return studentName;
    }
};

int main()
{
    Student s;
    s.acceptStudentDetails();
    s.displayStudentDetails();
    return 0;
}