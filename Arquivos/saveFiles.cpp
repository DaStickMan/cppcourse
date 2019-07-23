#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    ofstream output("out.txt");
    output << "TESTE\n";
    output << "NOVO TESTE";
}
