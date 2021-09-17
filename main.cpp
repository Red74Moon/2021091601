
#include <iostream>

using namespace std;

int main()
{
    ////국어, 영어, 수학, 총점, 평균 선언 & 초기화

    //int Korean   = 0;
    //int English   = 0;
    //int Mathmatics = 0;
    //int Tot   = 0;
    //float Avg = 0.0f;

    //int A = 65;
    //char C = A;

    //cout << C << endl;  // A 출력

    ////3과목 입력

    //cout << "국어 점수 입력 : ";
    //cin >> Korean;
    //;

    //cout << "영어 점수 입력 : ";
    //cin >> English;

    //cout << "수학 점수 입력 : ";
    //cin >> Mathmatics;

    ////3과목 총점 계산

    //Tot = Korean + English + Mathmatics;

    ////3과목 평균 계산
    //// 
    //// type
    //// int -> float
    //// float -> int
    //// float -> double
    //// casting(형변환)
    //// 형변환 static_cast<새로운형>(원래형태)
    //// int -> char
    //// char -> int

    //// unsigned int;
    //
    //Avg = static_cast<float>(Tot) / 3.0f;

    //// 총점, 평균 출력
    //
    //cout << "총합 : " << Tot << endl;
    //cout << "평균 : " << Avg << endl;

    // A     0     1  2  3  4  5  6  7  8  9  
    //     [2^32] []  [] [] [] [] [] [] [] []

    //int a[10];
    //int i;

    //for(i = 0; i < 10; i = i + 1)
    //{
    //    a[i] = i + 1;
    //    //cout << a[i] << endl;
    //}
    //
    //for (i = 0; i < 10; i = i + 1)
    //{
    //    cout << a[i] << endl;
    //}

    //a[0] = 1;
    //a[1] = 2;
    //a[2] = 3;
    //a[3] = 4;
    //a[4] = 5;
    //a[5] = 6;
    //a[6] = 7;
    //a[7] = 8;
    //a[8] = 9;
    //a[9] = 10;

    //cout << a[0] << endl;
    //cout << a[1] << endl;
    //cout << a[2] << endl;
    //cout << a[3] << endl;
    //cout << a[4] << endl;
    //cout << a[5] << endl;
    //cout << a[6] << endl;
    //cout << a[7] << endl;
    //cout << a[8] << endl;
    //cout << a[9] << endl;

    int tot = 0;
    int i;

    for (i = 0; i <= 100; i++) 
    {
        tot = tot + i;
    }

    cout << tot;

    return 0;  
}
