#include <iostream>
using namespace std;


int fibonacci(int n) {
    if (n == 1 || n == 2)
        return 1; 
    return fibonacci(n - 1) + fibonacci(n - 2); 
}

int main()
{
    int n;
    cout << "Nhap n: ";
    while (true)
    {
        cin >> n;
        if (cin.fail() || n <= 0 || n >= 30) 
        {
            cin.clear(); 
            cin.ignore(1000, '\n'); 
            cout << "Gia tri khong hop le! Vui long nhap lai n (1 <= n < 30): ";
        }
        else
            break; 
    }

    
    cout << "Cac so Fibonacci tu F(1) den F(" << n << "):\n";
    for (int i = 1; i <= n; i++)
    {
        cout << "F(" << i << ") = " << fibonacci(i) << endl; 
    }

    return 0;
}
