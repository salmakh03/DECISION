#include <iostream>
using namespace std;

int main(){
    string keanggotaan;
    int latihan,sisa;

    cout << "Masukan jenis keanggotaan: ";
    cin >> keanggotaan;
    cout << "Jumlah latihan: ";
    cin >> latihan;

    if (keanggotaan == "Silver") {
        sisa = 10-latihan;
        if (sisa==0){
            cout << "Masa latihan anda habis di bulan ini";
            
        } else if (sisa < 0){
            cout << "Anda sudah melebihi batas, silahkan upgrade keanggotaan";
        } else {
            cout << "Anda masih bisa latihan sebanyak = " << sisa << " kali." << endl;
        }
    } else if (keanggotaan == "Gold") {
            sisa = 20-latihan;
            if (sisa==0){
                cout << "Masa latihan anda habis di bulan ini";
            } else {
            cout << "Anda masih bisa latihan sebanyak = " << sisa << " kali." << endl;
            }
        } else if (keanggotaan == "Platinum") {
          cout << "Silahkan Latihan sepuasnya !! " << endl;
        
    }  
    return 0;
}

