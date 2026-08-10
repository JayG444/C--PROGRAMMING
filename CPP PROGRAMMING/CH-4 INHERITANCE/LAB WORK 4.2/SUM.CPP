#include <iostream>
using namespace std;

class NUM1
{
public:
    NUM1()
    {
    }
};
class NUM2 : public NUM1
{
};
class NUM3 : public NUM1
{
};
class NUM4 : public NUM2, public NUM3
{
public:
    int Sum(int a, int b, int c, int d)
    {
        cout << "SUM of the Numbers : " << a + b + c + d;
    }
};
