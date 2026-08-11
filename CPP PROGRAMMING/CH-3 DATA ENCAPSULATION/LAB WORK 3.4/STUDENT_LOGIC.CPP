#include <iostream>
#include <string.h>
using namespace std;

class Student
{

private:
    char stu_name[20];
    int stu_rollno;
    float stu_gpa;

public:
    // default constructor
    Student()
    {
        this->stu_rollno = 0;
        strcpy(this->stu_name, "NO NAME");
        this->stu_gpa = 0;
    }
    // parameterized constructor
    Student(char name[], int rollno, float gpa)
    {
        this->stu_rollno = rollno;
        strcpy(this->stu_name, name);
        this->stu_gpa = gpa;
    }

    // copy constructor
    Student(const Student &s)
    {
        strcpy(stu_name, s.stu_name);
        stu_rollno = s.stu_rollno;
        stu_gpa = s.stu_gpa;
    }
    ~Student()
    {
    }
    void getStudentData()
    {
        cout << "Roll NO : " << stu_rollno << endl;
        cout << "Name : " << stu_name << endl;
        cout << "GPA : " << stu_gpa << endl;
    }
    int getRollNo()
    {
        return stu_rollno;
    }
};
class StudentRecordManager
{
private:
    Student *students;
    int totalstudents;
    int capacity;

public:
    StudentRecordManager(int size = 20)
    {
        capacity = size;
        totalstudents = 0;
        students = new Student[capacity];
    }
    ~StudentRecordManager()
    {
        delete[] students;
    }
    void newStudent(const Student &s)
    {
        if (totalstudents < capacity)
        {
            students[totalstudents] = s;
            totalstudents++;
        }
        else
        {
            cout << "Student List is Full" << endl;
        }
    }
    void newStudent(char name[], int rollno, float gpa)
    {
        if (totalstudents < capacity)
        {
            Student s(name, rollno, gpa);
            students[totalstudents] = s;
            totalstudents++;
        }
        else
        {
            cout << "Student List is Full!" << endl;
        }
    }
    void displayAllStudents() const
    {
        if (totalstudents == 0)
        {
            cout << "No Student Records Available!" << endl;
            return;
        }
        for (int i = 0; i < totalstudents; i++)
        {
            students[i].getStudentData();
        }
    }
    void searchStudentByRollNo(int rollno) const
    {
        for (int i = 0; i < totalstudents; i++)
        {
            if (students[i].getRollNo() == rollno)
            {
                cout << "\nStudent Found!" << endl;
                students[i].getStudentData();
                return;
            }
        }

        cout << "Student Not Found!" << endl;
    }
};
