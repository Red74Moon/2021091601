
#include <iostream>
#include <string> // C++ STL

using namespace std;

int main()
{   
    // *----
    // **---
    // ***--
    // ****-
    // *****   의 역삼각형

    int Max = 0;
    cin >> Max;

    for (int i = 0; i <= Max; i++)
    {
        for (int j = Max; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;  
}
