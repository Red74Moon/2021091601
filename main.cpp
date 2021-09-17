
#include <iostream>

using namespace std;

int main()
{
    // 짝수의 합

    int Total = 0;
  
    for (int Count = 2; Count <= 100; Count = Count + 2) 
    {
     Total = Total + Count;
    }

    cout << Total << endl;

    return 0;  
}
