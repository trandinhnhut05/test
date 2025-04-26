#include <iostream>
using namespace std;

bool chiaHetCho3(int n) {

    return n % 3 == 0;
}

int* nhapMang(int& n) {
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    
    int* arr = new int[n];
    
    cout << "Nhap cac phan tu cua mang:\n";
    for(int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    
    return arr;
}

int timSoLonNhatChiaHet3(int* arr, int n, bool& timThay) {
    int maxChiaHet3 = -1;
    timThay = false;
    
    for(int i = 0; i < n; i++) {
        if(chiaHetCho3(arr[i])) {
            if(!timThay || arr[i] > maxChiaHet3) {
                maxChiaHet3 = arr[i];
                timThay = true;
            }
        }
    }
    
    return maxChiaHet3;
}

void inKetQua(int maxChiaHet3, bool timThay) {
    if(timThay) {
        cout << "So lon nhat chia het cho 3 la: " << maxChiaHet3 << endl;
    } else {
        cout << "Khong co " << endl;
    }
}

int main() {
    
    int n;
    int* arr = nhapMang(n);
    while (n <= 0) {
        cout << "So luong phan tu khong hop le. Vui long nhap lai: "<< endl;
        int* arr = nhapMang(n);
        bool timThay;
        int maxChiaHet3 = timSoLonNhatChiaHet3(arr, n, timThay);
        inKetQua(maxChiaHet3, timThay);
    }
    
     
    return 0;
}
