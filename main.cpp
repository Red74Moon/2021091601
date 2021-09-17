
#include <iostream>
#include <string> // C++ STL

using namespace std;

int main()
{   
    // ----*
    // ---**
    // --***
    // -****
    // *****  역삼각형 대칭

    int Max = 0;
    cin >> Max;

    for (int i = 0; i < Max; i++)
    {
        for (int j = Max - 1; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++) 
        {
            cout << "*";
        }
        cout  << endl;
    }

    return 0;  
}
