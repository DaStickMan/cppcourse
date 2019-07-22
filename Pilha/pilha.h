template <class Type>
class Pilha
{
private:
  Type *vet;
  int max_tam;
  int topo;

public:
  Pilha(int max);
  Type pop();
  void push(Type value);
  int max();
};