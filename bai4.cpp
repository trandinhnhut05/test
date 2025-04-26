#include <iostream>
#include <set> 
using namespace std;

int main()
{
    int n;
    cout << "Nhap so luong phan tu: ";
    while (true)
    {
        cin >> n;
        if (cin.fail() || n <= 0) 
        {
            cin.clear(); 
            cin.ignore(1000, '\n'); 
            cout << "Nhap lai so luong phan tu: ";
        }
        else
            break; 
    }

    set<int> s; 

    cout << "Nhap cac phan tu:\n";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x); 
    }

    
    cout << "So luong gia tri phan biet trong mang la: " << s.size() << endl;

    return 0;
}
