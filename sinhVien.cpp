#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Khai bao struct SinhVien
struct SinhVien {
    string ten;
    float toan;
    float ly;
    float hoa;
    float diemTB;
};

// ham nhap diem va kiem tra diem tu (0-10) 
void nhapDiem(float &diem, string tenMon) {
    do {
        cout << "Nhap diem " << tenMon << " (0-10): ";
        cin >> diem;
        if (cin.fail() || diem < 0 || diem > 10) {
            cout << "Vui long nhap lai diem hop le (0-10)!\n";
            cin.clear();
            cin.ignore(10000, '\n');
        }
    } while (diem < 0 || diem > 10);
}

int main() {
    int n;

    // Nhap so luong sinh vien 
    do {
        cout << "Nhap so luong sinh vien (>0): ";
        cin >> n;
        if (cin.fail() || n <= 0) {
            cout << "Nhap sai! Vui long nhap lai.\n";
            cin.clear();
            cin.ignore(10000, '\n');
        }
    } while (n <= 0);

    SinhVien sv[n];

    cin.ignore(); // Xoa bo dem 
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin sinh vien thu " << i + 1 << ":\n";
        cout << "Ten: ";
        getline(cin, sv[i].ten);

        nhapDiem(sv[i].toan, "Toan");
        nhapDiem(sv[i].ly, "Ly");
        nhapDiem(sv[i].hoa, "Hoa");

        // T�nh diem trung binh 
        sv[i].diemTB = (sv[i].toan + sv[i].ly + sv[i].hoa) / 3.0;

        cin.ignore(); // xoa bo nho truoc khi nhap ten sinh vien tiep theo 
    }

    // in danh sach sinh vien co so diem >=8 
    cout << "\nDanh sach sinh vien co diem trung binh >= 8:\n";
    bool coSinhVien = false;
    for (int i = 0; i < n; i++) {
        if (sv[i].diemTB >= 8) {
            cout << "Ten: " << sv[i].ten 
                 << ", Diem TB: " << fixed << setprecision(2) << sv[i].diemTB << endl;
            coSinhVien = true;
        }
    }

    if (!coSinhVien) {
        cout << "Khong co sinh vien nao co diem trung binh >= 8.\n";
    }

    return 0;
}

