#include <iostream>
using namespace std;

// Fungsi untuk mengecek apakah sebuah bilangan adalah prima
bool isPrima(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int batas = 50;
    int jumlah = 0;

    cout << "==========================================\n";
    cout << "  PROGRAM BILANGAN PRIMA (1 - 50)\n";
    cout << "==========================================\n\n";

    cout << "Bilangan Prima antara 1 sampai " << batas << ":\n";
    cout << "------------------------------------------\n";

    // Mencari dan menampilkan bilangan prima
    for (int i = 1; i <= batas; i++) {
        if (isPrima(i)) {
            cout << i << " ";
            jumlah++;
        }
    }

    cout << "\n------------------------------------------\n";
    cout << "\nTotal Jumlah Bilangan Prima: " << jumlah << "\n";
    cout << "==========================================\n";

    return 0;
}