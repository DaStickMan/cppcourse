#include <iostream>
#include <vector>
#include <list>

using namespace std;

bool sizeString(const string &s1, const string &s2)
{
    if (s1.length() < s2.length())
        return true;
    return false;
}

int main(int argc, char const *argv[])
{
    vector<int> v;
    list<const char *> names;
    list<const char *>::iterator it;

    names.push_back("Ipanema");
    names.push_back("Copacabana");
    names.push_back("Leblon");

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    names.sort(sizeString);

    for (size_t i = 0; i < v.size(); i++)
        cout << v[i] << endl;

    for (auto it = names.begin(); it != names.end(); it++)
        cout << *it << endl;
}
