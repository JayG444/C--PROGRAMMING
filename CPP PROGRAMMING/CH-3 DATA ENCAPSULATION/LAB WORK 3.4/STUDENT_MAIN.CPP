#include "STUDENT_LOGIC.CPP"

int main()
{
    StudentRecordManager manager;

    manager.newstudent("John Doe", 101, 8.7);
    manager.newstudent("Jane Smith", 102, 9.9);
    manager.newstudent("Bob Johnson", 103);
    cout << endl;

    manager.displayAllStudents();
    cout << endl;

    int rollNo;
    cout << "Enter Roll Number to Search: ";
    cin >> rollNo;

    manager.searchStudentByRollNo(rollNo);
    cout << endl;
}
