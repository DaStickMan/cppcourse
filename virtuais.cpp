#include <iostream>
#include <string.h>

using namespace std;

class virtuais
{
private:
  char *estringue;

public:
  virtuais(const char *est);
  ~virtuais();

  char *getEstringue()
  {
    return estringue;
  }
};

virtuais::virtuais(const char *est)
{
  cout << "AGORA VAI: " << endl;
  estringue = new char[strlen(est) - 1];
  strcpy(estringue, est);
}

virtuais::~virtuais()
{
  // cout << "DESCONSTRUINDO... " << endl;
  delete[] estringue;
  estringue = 0;
}

int main(int argc, char const *argv[])
{
  virtuais v("TESTE");
  // cout << "AGORA VAI: " << v.getEstringue() << endl;
  return 0;
}
