#include <iostream>

using namespace std;
using std::cin;
using std::cout;
using std::endl;
void main()
{
    setlocale(LC_ALL, "Russian");
    cout << "helou" << endl;
    const int SIZE = 5;
    int arr[SIZE] = {3, 5, 8};
    //arr[2] = 123; // на заппись 
    //cout << arr[2] << endl; // на чтение 
    cout<<"Введите значение : "
;    for (int i = 0; i < SIZE; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << "\t";

    }
    cout << endl;
    for (int i = SIZE-1; i >= 0; i--)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    int sum=0;
    for (int i = 0; i < SIZE; i++)
    {
        sum += arr[i];
    }
    cout << "Общая суммв  " << sum << endl;
    cout << "средне арифметическое " << (double)sum/SIZE << endl;

    int min, max;
    min = max = arr[0];
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] < min) min= arr[i];
        if (arr[i] > max) max= arr[i];
       

    }

    cout << "min: " << min << endl;
    cout << "max: " << max << endl;

}
