#include <iostream>  // std::cout
#include <algorithm> // std::find
#include <list>
#include <string>

using namespace std;

int main()
{
    std::list<int> myList;
    myList.push_back(5);
    myList.push_back(19);
    myList.push_back(34);
    myList.push_back(3);
    myList.push_back(33);

    std::list<int>::iterator iter;
    iter = find(myList.begin(), myList.end(), 34);
    if (iter != myList.end())
        std::cout << "Element found in myList : " << *iter << '\n';
    else
        std::cout << "Element not found in myList\n";

    std::list<std::string> myListstr;
    myListstr.push_back("Systèmes");
    myListstr.push_back("Experts");
    myListstr.push_back("Programme");
    myListstr.push_back("Logique");
    myListstr.push_back("Prolog");

    std::list<string>::iterator iterstr;
    iterstr = find(myListstr.begin(), myListstr.end(), "Programme");

    if (iterstr != myListstr.end())
        std::cout << "Element found in myListstr : " << *iterstr << '\n';
    else
        std::cout << "Element not found in myListstr\n";

    return 0;
}