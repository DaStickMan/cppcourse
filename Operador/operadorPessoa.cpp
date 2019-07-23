#include <iostream>
#include <string.h>

using namespace std;

class Person
{
private:
    int age;
    char *name;

public:
    Person(const char *name, int age)
    {
        init(name, age);
    }
    ~Person()
    {
        delete[] name;
        name = 0;
    }
    Person &operator=(Person &p)
    {
        init(p.getName(), p.getAge());
        return *this;
    }
    void init(const char *name, int age)
    {
        int length = strlen(name);
        this->name = new char[length + 1];
        strcpy(this->name, name);
        this->age = age;
    }
    int getAge()
    {
        return this->age;
    }
    char *getName()
    {
        return this->name;
    }
    void changeAge(int newAge)
    {
        this->age = newAge;
    }
};

main(int argc, char const *argv[])
{
    Person p1("Hanzo", 30), p2("Torbjron", 57);

    p1 = p2;

    p1.changeAge(800);

    cout << "Pessoa 1 - Nome(" << p1.getName() << ") Idade(" << p1.getAge()
         << ")" << endl;

    cout << "Pessoa 2 - Nome(" << p2.getName() << ") Idade(" << p2.getAge()
         << ")" << endl;
}
