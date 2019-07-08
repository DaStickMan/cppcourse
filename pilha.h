class Pilha
{
private:
  int *vet;
  int max_tam;
  int topo;

public:
  Pilha(int max);
  int pop();
  void push(int value);
  int max();
};