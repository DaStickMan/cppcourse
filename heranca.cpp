#include <iostream>
#include <string.h>

using namespace std;

class Animal
{
protected:
  int idade;

public:
  int getIdade()
  {
    return idade;
  }
  Animal(int idade)
  {
    this->idade = idade;
  }
};

class Cachorro : public Animal
{
  char *raca;

public:
  Cachorro(const char *raca, int idade);

  char *getRaca()
  {
    return raca;
  }
};

Cachorro::Cachorro(const char *raca, int idade) : Animal(idade)
{
  this->raca = new char[strlen(raca) + 1];
  strcpy(this->raca, raca);
}
int main()
{
  const char * s = "";
  Cachorro c("Vira-lata", 9);

  cout << "IDADE: " << c.getIdade() << endl;
  cout << "RAÇA: " << c.getRaca() << endl;

  return 0;
}