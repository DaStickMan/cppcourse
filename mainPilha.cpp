#include "pilha.cpp"

int main(int argc, char const *argv[])
{
  Pilha p = Pilha(100);
  p.pop();
  p.push(20);
  p.push(10);
  p.push(50);
  p.push(340);

  cout << p.pop() << endl;
  cout << p.pop() << endl;
}