#include <iostream>
using namespace std;

int main(){
    int pilihan,a,b,hasil;
    
    cout<<"Masukan angka pertama : ";
    cin>>a;
    cout<<"Masukan angka kedua : ";
    cin>>b;
    cout << "1. Penjumlahan"<< endl;
    cout << "2. Pengurangan"<< endl;
    cout << "3. Pembagian"  << endl;
    cout << "4. Perkalian"  << endl;
    cout << "Masukan pilihan : ";
    cin >>pilihan;
    
    if(pilihan == 1){
        hasil = a+b;
        cout<<"Hasilnya adalah = "<<hasil<<endl;
    }else if(pilihan == 2){
        hasil = a-b;
        cout<<"Hasilnya adalah = "<<hasil<<endl;
    }else if(pilihan == 3){
        hasil = a/b;
        cout<<"Hasilnya adalah = "<<hasil<<endl;
    }else if(pilihan == 4){
        hasil = a*b;
        cout<<"Hasilnya adalah = "<<hasil<<endl;
    }else{
        cout<<"Maaf pilihan tidak ada ";
    }
    return 0;
}




