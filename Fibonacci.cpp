#include <iostream>
using namespace std;

const int MAX = 31;
int fiboMemo[MAX]; // mang memoization de luu ket qua 

//ham Fibonacci dung de quy + memoization
int fibonacci(int n) {
    if (n == 1 || n == 2)
        return 1;
    if (fiboMemo[n] != -1)
        return fiboMemo[n]; // return ve neu da tinh trc do  
    fiboMemo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return fiboMemo[n];
}

int main() {
    int n;

    // nhap va kiem tra n (1 <= n <= 30)
    do {
        cout << "Nhap so n (1 <= n <= 30): ";
        cin >> n;
        if (cin.fail() || n < 1 || n > 30) {
            cout << "Gia tri khong hop le. Vui long nhap lai!\n";
            cin.clear();
            cin.ignore(10000, '\n');
        }
    } while (n < 1 || n > 30);

    // Khoi tao mang memo = -1 (chua tinh)
    for (int i = 0; i <= n; i++) {
        fiboMemo[i] = -1;
    }

    // In ra day Fibonacci tu F(1) den F(n)
    cout << "Day Fibonacci tu F(1) den F(" << n << "):\n";
    for (int i = 1; i <= n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}

