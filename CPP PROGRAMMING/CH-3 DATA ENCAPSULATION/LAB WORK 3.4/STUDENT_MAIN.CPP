#include "STUDENT_LOGIC.CPP"

int main()
{
    StudentRecordManager manager;

    manager.newStudent("Nayan Patel", 101, 9.5);
    manager.newStudent("Aakash Tiwari", 102, 8.7);
    manager.newStudent("Kushal Rabadiya", 103, 9.2);
    manager.newStudent("Naman Kadam", 104, 7.9);

    manager.displayAllStudents();

    int rollno;

    cout << endl << "Enter Roll Number to Search: ";
    cin >> rollno;

    manager.searchStudentByRollNo(rollno);
    Student student1("Nayan", 101, 9.5);
    Student student2(student1);

    cout << endl << "Original Student:" << endl;
    student1.getStudentData();

    cout << "Copied Student:" << endl;
    student2.getStudentData();
}
