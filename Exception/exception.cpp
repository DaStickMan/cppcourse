#include <iostream>
#include <string.h>

using namespace std;

class CustomException : public exception
{
protected:
    char *msg;

public:
    CustomException(const char *msg)
    {
        int length = strlen(msg);
        this->msg = new char[length + 1];
        strcpy(this->msg, msg);
    }
    virtual const char *what()
    {
        return this->msg;
    }
};

int main(int argc, char const *argv[])
{
    try
    {
        throw CustomException("teste exception customizado");
    }
    catch (CustomException c)
    {
        cerr << c.what() << endl;
    }
    catch (const std::exception &e)
    {
        cerr << "Error: " << e.what() << '\n';
    }
}
