#include <iostream>
#include <string.h>

using namespace std;

class Estudante
{
public:
  char *nome;

  Estudante(const char *nome)
  {
    cout << "Nova instância de: " << nome << endl;
    int tam = strlen(nome) + 1;
    this->nome = new char[tam];
    strcpy(this->nome, nome);
  }

  Estudante(const Estudante &e)
  {
    cout << "COPIANDO: " << endl;
    const char *nmCpy = "Copia de ";
    int tam = strlen(e.nome) + strlen(nmCpy) + 1;
    this->nome = new char[tam];
    strcpy(this->nome, nmCpy);
    strcat(this->nome, e.nome);
  }

  const char *getNome()
  {
    return nome;
  }
};

main()
{
  Estudante e("TESTE");
  Estudante f(e);
  cout << "COPIA: " << f.getNome() << endl;
}