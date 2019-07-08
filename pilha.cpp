#include <iostream>
#include "pilha.h"

using namespace std;

Pilha::Pilha(int max)
{
  vet = new int[max];
  max_tam = max - 1;
  topo = -1;
}
int Pilha::pop()
{
  if (topo == -1)
  {
    cout << "Pilha vazia" << endl;
  }
  else
  {
    int value = vet[topo];
    topo--;
    return value;
  }
  return 0;
}
void Pilha::push(int value)
{
  if (topo != max_tam - 1)
  {
    topo++;
    vet[topo] = value;
  }
  else
  {
    cout << "Pilha cheia" << endl;
  }
}
int Pilha::max()
{
  return max_tam;
}