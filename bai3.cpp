#include <iostream>
using namespace std;

struct SinhVien {
    string hoTen;
    double diemToan;
    double diemLy;
    double diemHoa;
    double diemTB;
};

double tinhDiemTrungBinh(SinhVien sv) {
    return (sv.diemToan + sv.diemLy + sv.diemHoa) / 3.0;
}

void nhapThongTinSinhVien(SinhVien &sv) {
    cout << "Nhap ho ten: ";
    cin.ignore();
    getline(cin, sv.hoTen);
    
    do {
        cout << "Nhap diem Toan (0-10): ";
        cin >> sv.diemToan;
        if(sv.diemToan < 0 || sv.diemToan > 10) {
            cout << "Diem khong hop le. Vui long nhap lai!\n";
        }
    } while(sv.diemToan < 0 || sv.diemToan > 10);
    
    do {
        cout << "Nhap diem Ly (0-10): ";
        cin >> sv.diemLy;
        if(sv.diemLy < 0 || sv.diemLy > 10) {
            cout << "Diem khong hop le. Vui long nhap lai!\n";
        }
    } while(sv.diemLy < 0 || sv.diemLy > 10);
    
    do {
        cout << "Nhap diem Hoa (0-10): ";
        cin >> sv.diemHoa;
        if(sv.diemHoa < 0 || sv.diemHoa > 10) {
            cout << "Diem khong hop le. Vui long nhap lai!\n";
        }
    } while(sv.diemHoa < 0 || sv.diemHoa > 10);
    
    sv.diemTB = tinhDiemTrungBinh(sv);
}

void hienThiSinhVien(SinhVien sv) {
    cout << "Ho ten: " << sv.hoTen << endl;
    cout << "Diem Toan: " << sv.diemToan << endl;
    cout << "Diem Ly: " << sv.diemLy << endl;
    cout << "Diem Hoa: " << sv.diemHoa << endl;
    cout << "Diem trung binh: " << sv.diemTB << endl;
    cout << "------------------------" << endl;
}

int main() {
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "So luong sinh vien phai lon hon 0!" << endl;
        return 1;
    }
    
    SinhVien* dsSinhVien = new SinhVien[n];
    
    for(int i = 0; i < n; i++) {
        cout << "\nNhap thong tin sinh vien thu " << i + 1 << ":\n";
        nhapThongTinSinhVien(dsSinhVien[i]);
    }
    
    cout << "\nDanh sach sinh vien co diem trung binh >= 8:\n";
    bool coSinhVienGioi = false;
    for(int i = 0; i < n; i++) {
        if(dsSinhVien[i].diemTB >= 8) {
            hienThiSinhVien(dsSinhVien[i]);
            coSinhVienGioi = true;
        }
    }
    
    if(!coSinhVienGioi) {
        cout << "Khong co sinh vien nao co diem trung binh >= 8\n";
    }
    
    delete[] dsSinhVien;
    return 0;
}
