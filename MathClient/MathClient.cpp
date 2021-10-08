#include <iostream>
#include <string>
#include "MathLibrary.h"

using namespace std;

int main()
{
    string n;
    bool check = true;
    int k = 0;
    
    while (check) // цикл продолжается до тех пор, пока пользователь не введет корректное значение
    {
        cout << "Please enter a prime number: ";
        cin >> n;
        for (int i = 0; i < n.size(); i++)
        {
            if (!isdigit(n[i]) || atoi(n.c_str()) >= 2147483647) {
                k++;
                break;
            }
            else
                k = 0;
        }
        
        if (k>0)
        {
            cout << "Error, invalid input. Please try again\n";
            cin.clear();    //сбрасываем ошибку и спящее состояние cin
            while (cin.get() != '\n');  
        }
        else
        {
            if (is_prime(atoi(n.c_str())))
                cout << "YES it is prime";
            else
                cout << "NO it is not prime";
            check = false;
        }
    }

    return 0;
}