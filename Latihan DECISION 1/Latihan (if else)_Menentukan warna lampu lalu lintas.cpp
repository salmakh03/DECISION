#include <iostream>
using namespace std;

int main() {
    string warna;

    cout << "Masukkan warna lampu lalu lintas: ";
    cin >> warna;

    if (warna == "Merah") {
        cout << "berhenti!" << endl;
    } else {
        if (warna == "Kuning") {
            cout << "Bersiap!";
        } else {
            if (warna == "Hijau") {
                cout << "Jalan!";
            }else{
              cout << "Warna tidak valid!" << endl;
            }
        }
    }
    
    return 0;
}



