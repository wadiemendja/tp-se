#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool decroissant(int i, int j) { return (i > j); }
bool croissant(int i, int j) { return (i < j); }
int main()
{
    vector<int> vec; // création d'un vecteur d'entiers
    int i;
    cout << endl;
    // Imprression de la taille originale du vecteur
    cout << " la taille initiale du vecteur = " << vec.size() << endl;
    // mettre 5 valeurs dans le vecteur
    for (i = 0; i < 5; i++)
        vec.push_back(i * i);
    //------------------------------------------------------------------
    // Imprression de la taille du vecteur
    cout << " la taille finale du vecteur = " << vec.size() << endl;
    // consulter les 5 valueurs du vecteur 1 façon
    for (i = 0; i < 5; i++)
    {
        cout << " vec [" << i << "] = " << vec[i] << " ";
    }
    cout << " avec la 1 facon" << endl;
    //------------------------------------------------------------------
    // utilisation d'un iterator pour accéder aux valeurs
    vector<int>::iterator it;
    int j = 0;
    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout << " vec [" << j << "] = " << *it << " ";
        j++;
    }
    cout << " avec la 2 facon" << endl;
    //------------------------------------------------------------------
    it = vec.begin();
    j = 0;
    while (it != vec.end())
    {
        cout << " vec [" << j << "] = " << *it << " ";
        it++;
        j++;
    }
    cout << " avec la 3 facon" << endl;
    //------------------------------------------------------------------
    sort(vec.begin(), vec.end(), decroissant);
    j = 0;
    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout << " vec [" << j << "] = " << *it << " ";
        j++;
    }
    cout << " apres le Tri decroissant " << endl;
    //------------------------------------------------------------------
    sort(vec.begin(), vec.end(), croissant);
    j = 0;
    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout << " vec [" << j << "] = " << *it << " ";
        j++;
    }
    cout << " apres le Tri croissant " << endl;
    //-------------------------------------------------------------------
    return 0;
}