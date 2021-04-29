#include <iostream>
#include <time.h>
#include <stack>   // pile
#include <cstdlib> // pour rand srand
#define Nmax 12
using namespace std;
//***************************************************************************
int nombreAleatoire(int nombreMax) // fonction qui génère un nombre aléatoire
// inférieur à nombreMax
{
    return (rand() % nombreMax);
}
//***************************************************************************
int main()
{
    stack<int> Pile;
    int element;
    cout << "\n.......... EMPILER les elements dans la Pile .........\n\n";
    srand(time(NULL)); // initialisation de rand

    cout << "\t";
    for (int i = 1; i <= Nmax; ++i)
    {
        element = nombreAleatoire(99);
        Pile.push(element);
        cout << '(' << element << ')' << ' ';
    }
    cout << "\n\n\n\ttaille de la pile = " << Pile.size() << endl;
    cout << "\n\n........ DEPILER les elements de la Pile (LIFO) ........\n\n";
    cout << "\t";
    int sommet;
    while (!Pile.empty())
    {
        sommet = Pile.top();
        cout << '(' << sommet << ')' << ' ';
        Pile.pop();
    }
    cout << endl
         << "\n................................. Fin du Programme! ..."
         << endl;
    cin.get();
    return 0;
}