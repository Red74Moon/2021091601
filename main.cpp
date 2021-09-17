
#include <iostream>

using namespace std;

int main()
{
    // 3의 배수 합

    int Total = 0;
  
    for (int Count = 3; Count <= 100; Count = Count + 3) 
    {
     Total = Total + Count;
    }

    cout << Total << endl;

    return 0;  
}
