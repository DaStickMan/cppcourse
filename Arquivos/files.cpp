#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    ifstream in("teste.txt");

    string text;
    char c = in.get();
    text.push_back(c);

    cout << "\nCharacter: \n";

    while (in.good())
    {
        cout << c;
        c = in.get();
        text.push_back(c);
    }
}
