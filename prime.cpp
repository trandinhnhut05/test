#include <iostream>
using namespace std;

bool checkPrime(int n){
    if (n < 2) return false;
    for (int i = 3; i < n; i++){
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    if (n <= 2){
        cout << "Khong co so nguyen to" << endl;
        return 0;
    }
    for (int i = 3; i <= n; i++){
        if (checkPrime(i)){
            cout << i << " la so nguyen to" << endl;
        }
    }
    return 0;
}
