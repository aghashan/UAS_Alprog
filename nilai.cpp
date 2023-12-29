#include <iostream>
#include <vector>

int main() {
    int jmltiket;
    std::cout << "Masukkan jumlah tiket: ";
    std::cin >> jmltiket;

    std::vector<int> nokursi(jmltiket);

    for (int i = 0; i < jmltiket; ++i) {
        plhkursi:
        std::cout << "Kursi ke " << i + 1 << " : ";
        std::cin >> nokursi[i];

        // Memeriksa apakah nomor kursi sudah dipilih sebelumnya
        for (int j = 0; j < i; ++j) {
            if (nokursi[i] == nokursi[j]) {
                std::cout << "Nomor kursi sudah dipilih." << std::endl;
                goto plhkursi;
            }
        }
    }

    // Tampilkan nomor kursi yang dipilih
    std::cout << "Nomor kursi yang dipilih: ";
    for (int k = 0; k < jmltiket; ++k) {
        std::cout << nokursi[k] << " ";
    }
    std::cout << std::endl;

    return 0;
}