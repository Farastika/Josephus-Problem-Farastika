#include <iostream>

// Fungsi untuk menyelesaikan masalah Josephus dengan pendekatan rekursif
int josephus(int n, int k) {
    // Jika hanya tersisa satu orang, dia akan menjadi yang terakhir bertahan hidup
    if (n == 1)
        return 1;
    else
        // Menggunakan rumus rekursif untuk menentukan posisi orang yang tersisa
        return (josephus(n - 1, k) + k - 1) % n + 1;
}

int main() {
    int n, k;
    
    // Masukkan jumlah orang dan langkah pembunuhan
    std::cout << "Masukkan jumlah orang dalam lingkaran: ";
    std::cin >> n;
    std::cout << "Masukkan langkah pembunuhan: ";
    std::cin >> k;

    // Menyelesaikan masalah Josephus dan mencetak posisi orang yang bertahan hidup
    int survivor = josephus(n, k);
    std::cout << "Orang yang bertahan hidup berada pada posisi: " << survivor << std::endl;

    return 0;
}
