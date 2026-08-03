#include<iostream>
#include<string.h>
using namespace std;

class Student
{

private:
    char stu_name[20];
    int stu_rollno;
    float stu_gpa;

public:
    Student()
    {
        this->stu_rollno = 0;
        strcpy(this->stu_name, "NO NAME");
        this->stu_gpa= 0;
    }
    ~Student()
    {
    }
};
