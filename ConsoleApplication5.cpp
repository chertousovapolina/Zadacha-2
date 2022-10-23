// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    int A;
    cin >> A;
    while (A > 0)
    {
        cout << A % 10;
        A /= 10;
    }
    cout << endl;
    if (A == 0) cout << "0";
}


