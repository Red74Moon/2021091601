
#include <iostream>

using namespace std;

int main()
{
    int MyGold  = 0;
    int MyChash = 0;
    //float HP = 1.3234f;
    //char H = 'H';

    //키보드 입력 받아서 MyGold에 저장
    cout << "MyGold  = ";
    cin >> MyGold;

    cout << "MyChash = ";
    cin >> MyChash;

    //MyGold 내용을 모니터에 출력
    cout << "MyGold + MyChash = " << MyGold + MyChash << endl;
    //cout << HP << endl;
    //cout << H << endl;

    return 0;  
}