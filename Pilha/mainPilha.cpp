#include "pilha.cpp"

int main(int argc, char const *argv[])
{
  Pilha<const char *> p = Pilha<const char *>(100);
  p.pop();
  p.push("Teste");
  p.push("10");
  p.push("50");
  p.push("É nois");

  cout << p.pop() << endl;
  cout << p.pop() << endl;
}