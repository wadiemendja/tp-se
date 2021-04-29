#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> ma_liste;
    ma_liste.push_back(9);
    ma_liste.push_back(16);
    ma_liste.push_back(1);
    ma_liste.push_front(25);
    ma_liste.push_front(16);
    ma_liste.insert(++ma_liste.begin(), 2);
    // ma_liste contient 16 25 2 9 16 1

    cout << endl;
    cout << " 1. parcour de la liste dans le premier sens" << endl;
    cout << " ----------------------------------------" << endl;
    cout << "\n (debut de la liste) -> ";
    list<int>::iterator iter;
    for (iter = ma_liste.begin(); iter != ma_liste.end(); ++iter)
        cout << "(" << *iter << ") -> ";
    cout << "(fin de la liste)" << endl
         << endl;

    cout << " 2. parcour de la liste dans le deuxieme sens" << endl;
    cout << " -----------------------------------------" << endl;
    cout << "\n (fin de la liste) -> ";
    list<int>::reverse_iterator riter;
    for (riter = ma_liste.rbegin(); riter != ma_liste.rend(); ++riter)
        cout << "(" << *riter << ") -> ";
    cout << "(debut de la liste)" << endl
         << endl;

    cout << " 3. La taille de la liste = " << ma_liste.size() << endl
         << endl;

    cout << " 4. Tri des elements la liste" << endl;
    cout << " -------------------------" << endl;
    ma_liste.sort();
    cout << " (debut de la liste) -> ";
    for (iter = ma_liste.begin(); iter != ma_liste.end(); ++iter)
        cout << "(" << *iter << ") -> ";
    cout << "(fin de la liste)" << endl
         << endl;

    cout << " 5. Elimination des doubllons" << endl;
    cout << " -------------------------" << endl;
    ma_liste.unique();
    cout << "\n (debut de la liste) -> ";
    for (iter = ma_liste.begin(); iter != ma_liste.end(); ++iter)
        cout << "(" << *iter << ") -> ";
    cout << "(fin de la liste)" << endl
         << endl;

    cout << " 6. La taille de la liste = " << ma_liste.size() << endl
         << endl;

    cin.get();
    return 0;
}
