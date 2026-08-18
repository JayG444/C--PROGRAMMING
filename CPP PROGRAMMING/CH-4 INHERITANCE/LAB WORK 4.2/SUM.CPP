#include <iostream>
using namespace std;

class NUM1
{
protected:
    int num1;
public:
    NUM1()
    {
        num1 = 0;
    }
    void setNum1()
    {
        cout << "Enter the first value: ";
        cin >> num1;
    }
};

class NUM2 : virtual public NUM1
{
protected:
    int num2;
public:
    NUM2()
    {
        num2 = 0;
    }
    void setNum2()
    {
        cout << "Enter the second value: ";
        cin >> num2;
    }
};

class NUM3 : virtual public NUM1
{
protected:
    int num3;
public:
    NUM3()
    {
        num3 = 0;
    }
    void setNum3()
    {
        cout << "Enter the third value: ";
        cin >> num3;
    }
};

class NUM4 : public NUM2, public NUM3
{
protected:
    int num4;
public:
    NUM4()
    {
        num4 = 0;
    }
    void setNum4()
    {
        cout << "Enter the fourth value: ";
        cin >> num4;
    }
    void Sum()
    {
        cout << "SUM of the Numbers: " << num1 + num2 + num3 + num4 << endl;
    }
};
