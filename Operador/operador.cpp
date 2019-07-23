#include <iostream>

using namespace std;

class Complexo
{
public:
    int real;
    int imaginario;
    Complexo(int real, int imaginario)
    {
        this->imaginario = imaginario;
        this->real = real;
    }

    Complexo operator+(Complexo &c)
    {
        return Complexo(this->real + c.real, this->imaginario + c.imaginario);
    }
};

int main(int argc, char const *argv[])
{
    Complexo n1(1, 3), n2(2, 5);
    Complexo n3 = n1 + n2;

    cout << "Imaginario: " << n3.imaginario << " Real: " << n3.real << endl;
}
