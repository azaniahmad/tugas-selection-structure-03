#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

// Cek apakah angka adalah bilangan prima
bool isPrime(int num) {
    if (num < 2) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    // Buka file input
    ifstream inputFile("input.txt");
    
    if (!inputFile.is_open()) {
        cout << "Gagal membuka file!" << endl;
        return 1;
    }
    
    int number;
    int totalPrimes = 0;
    
    cout << "Bilangan prima dari 1 sampai 50:" << endl;
    
    // Baca semua angka dari file
    while (inputFile >> number) {
        if (isPrime(number)) {
            cout << number << " ";
            totalPrimes++;
        }
    }
    
    inputFile.close();
    
    // Tampilkan hasil akhir
    cout << endl << endl;
    cout << "Jumlah bilangan prima :" << totalPrimes << endl;
    cout << "Total bilangan prima :" << totalPrimes << endl;
    
    return 0;
}
