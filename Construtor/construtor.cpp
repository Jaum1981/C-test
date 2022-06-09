#include <iostream>

using namespace std;

struct Gato 
{

    string nome = "";
    int idade = 0;

    Gato(string nome, int idade)
    {
        this->nome = nome;
        this->idade = idade;
        cout << this->nome << "nascendo" << endl;
    }

};

int main()
{
    Gato gato("Miau ", 2);
    return 0;
}
