#pragma once
#include <iostream>

void mainMenu()
{
    std::cout << "Apasa 1 pentru a lucra cu stiva \n";
    std::cout << "Apasa 2 pentru a lucra cu matricea \n";
    std::cout << "Apasa 0 pentru a iesi \n";
}
void stackMenu()
{
    std::cout << "Apasa 1 pentru a initializa stackul cu constructorul default \n";
    std::cout << "Apasa 2 pentru a initializa stackul cu constructorul cu parametri \n";
    std::cout << "Apasa 3 pentru a da push \n";
    std::cout << "Apasa 4 pentru a da pop \n";
    std::cout << "Apasa 5 pentru a verifica daca stackul e gol \n";
    std::cout << "Apasa 6 pentru a verifica daca stackul e plin \n";
    std::cout << "Apasa 7 pentru a printa stackul \n";
    std::cout << "Apasa 0 pentru a iesi \n";
}
void matrixMenu()
{

    std::cout << "Apasa 1 pentru a initializa matricea 1 cu constructorul cu 1 parametru \n";
    std::cout << "Apasa 2 pentru a initializa matricea 2 cu constructorul cu 2 parametri \n";
    std::cout << "Apasa 3 pentru a seta marime noua a matrici 1 \n";
    std::cout << "Apasa 4 pentru a popula matricea dorita \n";
    std::cout << "Apasa 5 pentru a scadea matricea 1 din matricea 2 \n";
    std::cout << "Apasa 6 pentru a aduna matricea 2 la matricea 1 \n";
    std::cout << "Apasa 7 pentru a inmulti matricele intre ele \n";
    std::cout << "Apasa 8 pentru a printa matricele \n";
    std::cout << "Apasa 0 pentru a iesi \n";
}