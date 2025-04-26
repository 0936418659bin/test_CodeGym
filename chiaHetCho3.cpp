#include <iostream>
#include <limits>
using namespace std;

int main() {
    int n;

    do {
        cout << "Nhap so luong phan tu n (>0): ";
        cin >> n;
        if(cin.fail() || n <= 0) {
            cout << "Nhap sai! Vui long nhap lai.\n";
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        }
    } while (n <= 0);

    int arr[n];
    cout << "Nhap " << n << " so nguyen:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxChiaHetCho3 = -1e9; 
   
    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 0 && arr[i] > maxChiaHetCho3) {
            maxChiaHetCho3 = arr[i];
        }
    }

    if (maxChiaHetCho3 == -1e9) {
        cout << "Khong co" << endl;
    } else {
        cout << "So lon nhat chia het cho 3 la: " << maxChiaHetCho3 << endl;
    }

    return 0;
}

