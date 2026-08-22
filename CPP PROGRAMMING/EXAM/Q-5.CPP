#include<iostream>
#include<string.h>
using namespace std;

class Animal
{
public:
    virtual void makesound() = 0;
    virtual void move() = 0;
};

class Lion : public Animal
{
    
};
class Fish : public Animal
{

};

int main()
{

}