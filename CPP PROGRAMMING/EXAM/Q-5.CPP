#include<iostream>
#include<string.h>
using namespace std;

class Animal
{
public:
    virtual void makesound() = 0;
    virtual void move() = 0;
    virtual ~Animal() {}
};

class Lion : public Animal
{
public:
    void makesound()
    {
        cout << "Lion roars" << endl;
    }
    void move()
    {
        cout << "Lion runs on land" << endl;
    }
};

class Fish : public Animal
{
public:
    void makesound()
    {
        cout << "Fish makes bubbles" << endl;
    }
    void move()
    {
        cout << "Fish swims in water" << endl;
    }
};

int main()
{
    Lion lion;
    Fish fish;
    
    Animal* ptr1 = &lion;
    Animal* ptr2 = &fish;
    
    ptr1->makesound();
    ptr1->move();
    
    ptr2->makesound();
    ptr2->move();
    
    return 0;
}
