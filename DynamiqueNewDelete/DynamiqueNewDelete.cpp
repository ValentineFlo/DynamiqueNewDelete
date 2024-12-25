// DynamiqueNewDelete.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

// pile désalouer le premier puis le second...
// tas accès à la memoire de facon dynamique 
// toujours libérer l'espace de memoire

struct Livre
{
    unsigned int NbPage;
};



int main()
{
    int a = 2;
    int* ptr = new int;
    *ptr = 3;

    std::cout << *ptr << std::endl;
    delete ptr;


    Livre* ptrL = new Livre;
    std::cout << ptrL << std::endl; // l'adresse memoire de ma struct

    delete ptrL;


    // operateur new[]
    int* ptrT = new int[3]; // creer un tableau d'entier alloue dynamiquement
    std::cout << ptrT << std::endl;
    delete[] ptrT;


    std::cout << "Hello World!\n";
}

