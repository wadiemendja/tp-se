#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;

struct Regle
{
    int indice;
    vector<string> premises;
    string conclusion;
};

vector<Regle> BR;
vector<string> BF;
string conclusion;

void afficher(Regle r)
{
    cout << "R" << r.indice << " : ";
    for (int i = 0; i < r.premises.size(); i++)
        cout << r.premises[i] << " ";
    cout << "=>" << r.conclusion << endl;
}

void chargerBR()
{
    string ligne;
    fstream fichier("regles.txt");
    int ln = 1;
    while (!fichier.eof())
    {
        getline(fichier, ligne);
        stringstream mots(ligne);
        string mot;
        Regle r;
        while (mots >> mot)
        {
            if (mot == ">")
                break;
            r.premises.push_back(mot);
            r.indice = ln;
            ln++;
            BR.push_back(r);
        }
        for (int i = 0; i < BR.size(); i++)
            afficher(BR[i]);
    }
}

bool faitExit(string fait)
{
    bool exit = false;
    for (int n = 0; n < BF.size(); n++)
    {
        if (BF[n] == fait)
        {
            return true;
        }
    }
    return false;
}

void chainageAvant()
{
    bool fin = false;
    while (!faitExit(conclusion) && !fin)
    {
        vector<Regle> regles_filtre;
        for (int i = 0; i < BR.size(); i++)
        {
            Regle r = BR[i];
            if (faitExit(r.conclusion))
                continue;
            bool premOK = true;
            for (int n = 0; i < r.premises.size(); n++)
            {
                string premise = r.premises[n];
                if (!faitExit(premise))
                {
                    premOK = false;
                    break;
                }
            }
            if (premOK)
                regles_filtre.push_back(r);
        }

        for (int i = 0; i < regles_filtre.size(); i++)
        {
            Regle r = regles_filtre[i];
            BF.push_back(r.conclusion);
            afficher(r);
        }
        fin = regles_filtre.size() == 0;
    }
}

int main()
{
    chargerBR();

    BF.push_back("B");
    BF.push_back("A");
    BF.push_back("U");
    BF.push_back("E");

    cout << "___ Afficher avant ___" << endl;
    chainageAvant();

    cout << conclusion << "exit = " << faitExit(conclusion) << endl;
    
    return 0;
}