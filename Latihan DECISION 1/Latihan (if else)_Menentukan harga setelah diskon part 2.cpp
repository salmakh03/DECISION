#include <iostream>
using namespace std;

int main() {
    int total_pembelian, discount = 0;

    // Meminta input dari pengguna
    cout << "Masukkan total pembelian: ";
    cin >> total_pembelian;

    // Mengecek apakah mendapat diskon
    if (total_pembelian >= 500000) {
        discount = 0.3 * total_pembelian;
    } else {
        if (total_pembelian >= 200000) {
            discount = 0.2 * total_pembelian;
        } else {
            if (total_pembelian >= 100000) {
                discount = 0.1 * total_pembelian;
            } else {
                discount = 0;
            }
        }
        
    }
    total_pembelian-=discount;

    // Menampilkan hasil diskon
    cout << "Total yang harus dibayar = " << total_pembelian << endl;

    return 0;
}
