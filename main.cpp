#include <iostream>
#include <cmath>
using namespace std;
//--------------------
bool ArmstrongNumberCheck(int);
//--------------------
int main()
{
    setlocale(LC_ALL, "ru");
    int number;
    cout << "Введите целое положительное число: ";
    cin >> number;
    if (ArmstrongNumberCheck(number))
        cout << number << " - число Армстронга\n";
    else
        cout << number << " - не число Армстронга\n";
    return 0;
}
//--------------------
bool ArmstrongNumberCheck(int CheckNumber)
{
    int OriginalNumber, remainder, result = 0, n = 0;
    bool flag;
    OriginalNumber = CheckNumber;

    while (OriginalNumber != 0)
    {
        OriginalNumber /= 10;
        ++n;
    }

    OriginalNumber = CheckNumber;

    while (OriginalNumber !=0)
    {
        remainder = OriginalNumber % 10;
        result += pow(remainder, n);
        OriginalNumber /= 10;
    }

    if (result == CheckNumber)
        flag = true;
    else
        flag = false;
    return flag;
}