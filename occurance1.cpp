#include <iostream>
#include <list>
using namespace std;

int main()
{
    int array[6] = {1, 2, 1, 3, 2, 5};
    for (int i = 0; i < 6; i++)
    {
        cout << array[i] << " | ";
    }
    list<int> numbers;
    list<int> occurance;
    for (int i = 0; i < 6; i++)
    {
        if ( i = 0 ) {
            numbers.push_back(array[i]);
            occurance.push_back(1);
        } else {
            
        }
    }
    return 0;
}