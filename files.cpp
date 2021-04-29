#include <iostream>
#include <queue>
#include <time.h>
#include <cstdlib> // pour rand srand
using namespace std;
//*****************************************************************************
int nombreAleatoire(int nombreMax) // fonction qui génère un nombre aléatoire
// inférieur à nombreMax
{
    return (rand() % nombreMax);
}
//*****************************************************************************

int main()
{
    queue<int> File;
    int element;
    cout << "\n..... ENFILER les elements dans la File .....\n\n";
    srand(time(NULL)); // initialisation de rand
    for (int i = 1; i <= 10; ++i)
    {
        element = nombreAleatoire(99);
        File.push(element);
        cout << ' ' << element;
    }

    cout << "\n\n taille de la File = " << File.size();
    cout << "\n\n ..... DEFILER les elements de la File (FIFO) .....\n\n";
    int tete;
    while (!File.empty())
    {
        tete = File.front();
        cout << ' ' << tete;
        File.pop();
    }
    cout << endl
         << "\n... Fin du Programme! ..." << endl;
    cin.get();
    return 0;
}