#include <iostream>
using namespace std;



class Fruit
{
protected:
    string name;
    string color;
public:
    string getName(){return this->name;}
    string getColor(){return this->color;}
};

class Apple : public Fruit
{
public:
    Apple(){this->name = "Apple";}
    Apple(string _color){this->color = _color; this->name = "Apple";}
};
class Banana : public Fruit
{
public:
    Banana(){this->name = "banana", this->color = "yellow";}
};
class GrannySmith : public Apple
{
public:
    GrannySmith(){
        this->name = "Granny Smith apple";
        this->color = "green";
    }
};


int main()
{
    Apple a("red");
    Banana b;
    GrannySmith c;

    std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
    std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
    std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";
}