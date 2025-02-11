#include <iostream>
using namespace std;

int main() {
    float total_pembelian, discount = 0;

    // Meminta input dari pengguna
    cout << "Masukkan total pembelian: ";
    cin >> total_pembelian;

    // Mengecek apakah mendapat diskon
    if (total_pembelian >= 100000) {
        discount = 0.05 * total_pembelian;
    } else {
        discount = 0;
    }
    total_pembelian-=discount;

    // Menampilkan hasil diskon
    cout << "Total yang harus dibayar = " << total_pembelian << endl;

