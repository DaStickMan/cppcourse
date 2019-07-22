#include <iostream>
#include "pilha.h"

using namespace std;

template <class Type>
Pilha<Type>::Pilha(int max)
{
  vet = new Type[max];
  max_tam = max - 1;
  topo = -1;
}
template <class Type>
Type Pilha<Type>::pop()
{
  if (topo == -1)
  {
    cout << "Pilha vazia" << endl;
  }
  else
  {
    Type value = vet[topo];
    topo--;
    return value;
  }
  return NULL;
}
template <class Type>
void Pilha<Type>::push(Type value)
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
template <class Type>
int Pilha<Type>::max()
{
  return max_tam;
}