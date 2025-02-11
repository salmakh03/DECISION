#include <iostream>
using namespace std;

int main(){
    int pilihan,r,tinggi,sisi,hasil;
    cout << "Menu pilihan"<< endl;
    cout << "1. Menghitung volume kubus"<< endl;
    cout << "2. Menghitung luas lingkaran"<< endl;
    cout << "3. Menghitung volume silinder"<< endl;
    cout << "Masukan pilihan : ";
    cin >>pilihan;
    
    switch (pilihan){
        case 1:
        cout<<"Masukan panjang sisi kubus : ";
        cin>>sisi;
        hasil = sisi*sisi*sisi;
        cout<<"Hasilnya adalah : "<<hasil<<endl;
        break;
        case 2:
        cout<<"Masukan panjang jari-jari lingkaran : ";
        cin>>r;
        hasil = 3.14*r*r;
        cout<<"Hasilnya adalah : "<<hasil<<endl;
        break;
        case 3:
        cout<<"Masukan panjang jari-jari lingkaran : ";
        cin>>r;
        cout<<"Masukan tinggi silinder : ";
        cin>>tinggi;
        hasil = 3.14*r*r*tinggi;
        default:
        cout<<"Maaf, pilihan menu tidak tersedia";
    }
    return 0;
}

