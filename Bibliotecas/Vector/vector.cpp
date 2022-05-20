#include<iostream>
#include<vector>
#include<stdio.h>

int main()
{
    std::vector<int> v(5); //vetor de 5 posições
    std::vector<int> v2; //vetor dinamico
    std::vector<int> v3; //vetor dinamico

    int tam1, tam2, i;

    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
    v2.push_back(5);
    //num[4]=5; //erro, n conta como um vetor

    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);

    //v2.swap(v3);//troca os valores do vetor de acordo com o indice

    v2.insert(v2.begin(), 1); //insere o valor 1 na primeira posição
    //begin: 1 posição do vetor (posso usar +1 para escolher a posição)
    //end: ultima posição do vetor (posso usar -1 para escolher a posição)

    v2.erase(v2.end()-2); //remove o valor da posição

    //clear -> limpa o vetor
    

    tam2 =(int) v2.size();

    std::cout << "Primeiro valor de v2: " << v2.front() << std::endl;
    std::cout << "Ultimo valor de v2: "   << v2.back()  << std::endl;
    std::cout << "Valor do meio: "        <<v2.at(tam2/2) << std::endl;
    std::cout << "Tamanho do vetor: " << tam2 << std::endl;

    for(i = 0; i < v2.size(); i++)
    {
        std::cout << v2[i] << "  ";
    }

    std::cout << std::endl;

    for(i=0; i < v3.size(); i++)
    {
        std::cout << v3[i] << "  ";
    }

    while(!v2.empty())
    {
        v2.pop_back();//tira o ultimo elemento do vetor

    }

    std::cout << std::endl;
    
    std::cout << v2.size() << std::endl;

    return 0;
}
