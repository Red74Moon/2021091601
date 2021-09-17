
#include <iostream>
#include <string> // C++ STL

using namespace std;

int main()
{   
    // 배열
    char C[10];

    C[0] = 'H';
    C[1] = 'e';
    C[2] = 'l';
    C[3] = 'l';
    C[4] = 'o';
    C[5] = '\0';  // 문자열의 끝을 알려준다. 없으면 이후로 쓰레기 값 나온다.


    cout << C[0] << C[1] << C[2] << C[3] << C[4] << endl;

    cout << C << endl;

    string Hello = "Hello";  // 마지막에 \0 

    return 0;  
}
