#include <iostream>
using namespace std;

// Ham kiem tra so nguyen to 
bool laSoNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int N;
    cout << "Nhap so nguyen duong N: ";
    cin >> N;

    if (N <= 2) {
        cout << "Khong co so nguyen to" << endl;
        return 0;
    }

    cout << "Cac so nguyen to nho hon " << N << " la: ";
    for (int i = 2; i < N; i++) {
        if (laSoNguyenTo(i)) { // Goi ham kiem tra so nguyen to 
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}

