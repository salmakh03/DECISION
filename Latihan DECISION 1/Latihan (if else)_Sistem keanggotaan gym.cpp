#include <iostream>
using namespace std;

int main() {
    string keanggotaan;
    int latihan,sisa;

    cout << "Masukan jenis keanggotaan: ";
    cin >> keanggotaan;
    cout << "Jumlah latihan: ";
    cin >> latihan;

    if (keanggotaan == "Silver" && latihan <=10) {
        sisa = 10-latihan;
        if (sisa==0){
            cout << "Masa latihan anda habis di bulan ini";
            
        } else {
            if (sisa < 0){
            cout << "Anda sudah melebihi batas, silahkan upgrade keanggotaan";
            } else {
            cout << "Anda masih bisa latihan " << sisa << " kali." << endl;
            }
        }
    }
    else {
        if (keanggotaan == "Gold" && latihan <=20) {
            sisa = 20-latihan;
            if (sisa==0){
            cout << "Masa latihan anda habis di bulan ini";
            } else {
            cout << "Anda masih bisa latihan " << sisa << " kali." << endl;
            }   
        }
        else {
            if (keanggotaan == "Platinum" && latihan >=30) {
                cout << "Silahkan Latihan sepuasnya " << endl;
            }
        }
        
    }
    return 0;
}
