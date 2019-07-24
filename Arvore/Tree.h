#include <iostream>
using namespace std;

class No
{
private:
    No *left, *right;
    string name;

public:
    No(string name)
    {
        this->name = name;
        left = NULL;
        right = NULL;
    }

    string getChave()
    {
        return name;
    }

    No *getleft()
    {
        return left;
    }

    No *getright()
    {
        return right;
    }

    void setleft(No *no)
    {
        left = no;
    }

    void setright(No *no)
    {
        right = no;
    }
};

class Arvore
{
private:
    No *raiz;

public:
    Arvore()
    {
        raiz = NULL;
    }

    void inserir(string name)
    {
        if (raiz == NULL)
            raiz = new No(name);
        else
            inserirAux(raiz, name);
    }

    void inserirAux(No *no, string& chave)
    {
        // se for menor, ent�o insere � leftuerda
        if (chave < no->getChave())
        {
            // verifica se a leftuerda � nulo
            if (no->getleft() == NULL)
            {
                No *novo_no = new No(chave);
                no->setleft(novo_no); // seta o novo_no � leftuerda
            }
            else
            {
                // sen�o, continua percorrendo recursivamente
                inserirAux(no->getleft(), chave);
            }
        }
        // se for maior, ent�o insere � righteita
        else if (chave > no->getChave())
        {
            // verifica se a righteita � nulo
            if (no->getright() == NULL)
            {
                No *novo_no = new No(chave);
                no->setright(novo_no); // seta o novo_no � righteita
            }
            else
            {
                // sen�o, continua percorrendo recursivamente
                inserirAux(no->getright(), chave);
            }
        }
        // se for igual, n�o vai inserir
        // n�o pode existir 2 chaves iguais
    }

    No *getRaiz()
    {
        return raiz;
    }

    void emOrdem(No *no)
    {
        if (no != NULL)
        {
            emOrdem(no->getright());
            cout << no->getChave() << " ";
            emOrdem(no->getleft());
        }
    }
};