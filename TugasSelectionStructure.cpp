#include <iostream>
#include <vector>

// Fungsi untuk memeriksa apakah suatu bilangan prima
bool isPrime(int n) {
    if (n <= 1) return false;  // Bilangan kurang dari atau sama dengan 1 bukan prima
    for (int i = 2; i * i <= n; i++) {  // Periksa pembagian dari 2 hingga sqrt(n)
        if (n % i == 0) return false;  // Jika dapat dibagi, bukan prima
    }
    return true;  // Jika tidak ada pembagi, itu prima
}

int main() {
    std::vector<int> primes;  // Vektor untuk menyimpan bilangan prima
    int sum = 0;  // Variabel untuk menyimpan jumlah prima
    int count = 0;  // Variabel untuk menghitung jumlah prima
    int limit = 50;  // Batas atas untuk memeriksa prima

    // Loop melalui bilangan dari 2 hingga batas
    for (int i = 2; i <= limit; i++) {
        if (isPrime(i)) {  // Jika bilangan tersebut prima
            primes.push_back(i);  // Tambahkan ke vektor prima
            sum += i;  // Tambahkan ke jumlah
            count++;  // Tambah hitungan
        }
    }

    // Keluarkan daftar prima
    std::cout << "Bilangan prima dari 1 sampai " << limit << ": " << std::endl;
    for (size_t i = 0; i < primes.size(); i++) {  // Loop melalui vektor prima
        std::cout << primes[i];  // Cetak prima
        if (i < primes.size() - 1) {  // Jika bukan prima terakhir
            std::cout << " | ";  // Tambahkan pemisah
        }
    }
    std::cout << std::endl;

    // Keluarkan jumlah prima
    std::cout << "Jumlah bilangan prima :" << count << std::endl;
    // Keluarkan total prima
    std::cout << "Total bilangan prima :" << sum << std::endl;

    return 0;  // Akhir program
}
