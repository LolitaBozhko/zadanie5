// koren.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS"); 
    float x; 
    cout << "Введите значение x: ";
    cin >> x;

    float y = x, y1 = 0; 

    while (true)
    {
        y1 = 0.5 * (y + 3 * x / (2 * y * y + x / y)); // итерационная формула

        if (abs(y1 - y) < 10e-5) // условие окончание итерации
            break;
        y = y1; 
    }
    cout << "Корень кубический равен " << y1 << endl;
}