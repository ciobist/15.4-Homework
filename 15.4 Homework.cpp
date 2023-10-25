#include <iostream>
#include <string>
using namespace std;

void FindOddNumbers(int LimitNumber, bool IsOdd)
{
    setlocale(LC_ALL, "Russian"); //Для русского языка в консоли

    cout << "(Для функции) Введите предельное число: "; 
    cin >> LimitNumber;

    cout << "(Для функции) Какие числа выводить?" << "\n1 - Нечётные" << "\n0 - Чётные" << "\nВаш выбор: ";
    cin >> IsOdd;

    for (int i = IsOdd; i <= LimitNumber; i += 2) // Для нахождения всех чётных/нечётных чисел
    {
        cout << i << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian"); //Для русского языка в консоли

    string Spaces = "\n\n";    
    int LimitNumber;

    cout << "Введите предельное число: ";
    cin >> LimitNumber;

    for (int i=0; i <= LimitNumber; i += 2)  // Для нахождения всех чётных чисел
    {
        cout << i << endl;
    }
    cout << Spaces;

    cout << "______________________________________"<< endl; // Для визуального разграничения
    cout << "Вывод через функцию:" << "\n" << endl;

    FindOddNumbers(0, 0);
}

