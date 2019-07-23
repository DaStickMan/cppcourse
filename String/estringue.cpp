#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string teste = "Muitos testes";

    teste.insert(teste.size(), " opa");

    cout << teste << endl;

    1 == 1 ? cout << "teste" << endl : cout << "opa" << endl;

    return 0;
}
