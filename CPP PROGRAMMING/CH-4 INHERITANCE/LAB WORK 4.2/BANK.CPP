#include <iostream>
using namespace std;

class RBI
{
protected:
    float rate;
};
class SBI : public RBI
{
public:
    SBI()
    {
        rate = 7.5;
    }
    void getROI()
    {
        cout << "SBI Rate of Interest   : " << rate << endl;
    }
};
class BOB : public RBI
{
public:
    BOB()
    {
        rate = 6.5;
    }
    void getROI()
    {
        cout << "BOB Rate of Interest   : " << rate << endl;
    }
};
class ICICI : public RBI
{
public:
    ICICI()
    {
        rate = 5.9;
    }
    void getROI()
    {
        cout << "ICICI Rate of Interest : " << rate << endl;
    }
};
