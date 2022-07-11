#include <iostream>
using namespace std;


class Person
{
protected:
    string name;
    int age;
    string sex;
    int weight;

public:
    void SetName(string& _name){this->name = _name;}
    void SetAge(int _age){this->age = _age;}
    void SetWeight(int _weight){this->weight = _weight;}

    static int count;
};
int Person::count = 0;
class Student : public Person
{
private:
    int study_year;
public:
    Student(string _name, int _age, string _sex, int _weight, int _study_year){
        this->name = _name;
        this->age = _age;
        this->sex = _sex;
        this->weight = _weight;
        this->study_year = _study_year;
        count++;
    }

    void SetYear(int _year){this->study_year = _year;}
    void inkrementYear(void){this->study_year++;}
};



int main(){
    Student p("oleg", 32, "man", 80, 2);
    Student q("oleg", 32, "man", 80, 2);
    Student r("oleg", 32, "man", 80, 2);

    cout << Person::count;
    return 0;
}