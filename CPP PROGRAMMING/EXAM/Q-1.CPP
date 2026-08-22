#include<iostream>
#include<string.h>
using namespace std;

class Student
{
private:
    char name[20];
    int rollnumber;
public:
    // parameterized constructor
    Student(char n[] , int rnum)
    {
        strcpy(this->name,n);
        rollnumber = rnum;
    }
    void setData()
    {
        fflush(stdin);
        cout << "Enter the Name of Student : ";
        gets(name);

        cout << "Enter the Roll Number of Student : ";
        cin >> rollnumber;
    }
    void displayData()
    {
        cout << "The Name of the student is : " << name << endl;
        cout << "The roll Number is : " << rollnumber << endl;
    }

};

int main()
{
    Student* s1;
    s1[1].setData();
    s1[1].displayData();
}