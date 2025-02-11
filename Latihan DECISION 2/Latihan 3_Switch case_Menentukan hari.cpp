#include <iostream>
using namespace std;

int main(){
    int hari;
    cout << "Masukan nomor hari (1-7) : ";
    cin >> hari;
    switch(hari){
        case 1:
        cout <<"\nHari ke-"<<hari<<" adalah SENIN";
        break;
    case 2:
        cout<<"\nHari ke-"<<hari<<" adalah SELASA";
        break;
    case 3:
        cout<<"\nHari ke-"<<hari<<" adalah RABU";
        break;
    case 4:
        cout<<"\nHari ke-"<<hari<<" adalah KAMIS";
        break;
    case 5:
        cout<<"\nHari ke-"<<hari<<" adalah JUMAT";
        break;
    case 6:
        cout<<"\nHari ke-"<<hari<<" adalah SABTU";
        break;
    case 7:
        cout<<"\nHari ke-"<<hari<<" adalah AHAD";
        break;
    default:
        cout<<"\nTidak terdapat nomor hari ke-"<<hari;
    }
    return 0;
}
