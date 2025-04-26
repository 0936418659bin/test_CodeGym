#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;

    // Nhap va kiem tra n > 0 33
    do {
        cout << "Nhap so luong phan tu (>0): ";
        cin >> n;
        if (cin.fail()) {
            cout << "Nhap sai! Vui long nhap so nguyen.\n";
            cin.clear();
            cin.ignore(10000, '\n');
            n = -1; // cho vong lap chay tiep tuc 
        } else if (n <= 0) {
            cout << "So luong phan tu phai > 0!\n";
        }
    } while (n <= 0);

    int a[n];
    //khai bao set 
    set<int> tapPhanBiet;

    // Nhap mang 
    cout << "Nhap mang:\n";
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
        tapPhanBiet.insert(a[i]);
    }

    // Xu li output 
    cout << "\n==> So luong gia tri phan biet trong mang: " << tapPhanBiet.size() << endl;

    if (tapPhanBiet.size() == 1) {
        cout << "Luu y: Tat ca cac phan tu trong mang deu giong nhau.\n";
    }

    return 0;
}
