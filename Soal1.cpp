#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double perkalian(double a,double b){
    double hasil=a*b;
    return hasil;
}
double penjumlahan (double a,double b){
    double hasil=a+b;
    return hasil;
}
double pembagian (double a,double b){
    double hasil= a/b;
    return hasil;
}
double pengurangan (double a, double b){
    double hasil=a-b;
    return hasil;
}
double pangkat (double a, double b){
    double hasil = pow(a,b);
    return hasil;
}

int main (){
    double a,b;
    int menu;
    cout<< "KALKULATOR SEDERHANA \n";
    cout<<"1.Perkalian \n";
    cout<<"2.Pembagian \n";
    cout<<"3.Penjumlahan \n";
    cout<<"4.Pengurangan \n";
    cout<<"5.Pangkat \n";
    cout<<"Pilih Menu 1-5 :";
    cin>>menu;
    switch (menu)
    {
    case 1:
        cout<<"Perkalian \n";
        cout<<"Masukan Bilangan Pertama: ";
        cin>>a;
        cout<<"Masukan Bilangan Kedua: ";
        cin>>b;
        cout<<a<< " Kali "<<b<<" = "<< perkalian(a,b)<<endl;
        break;
     case 2:
        cout<<"Pembagian \n";
        cout<<"Masukan Bilangan Pertama: ";
        cin>>a;
        cout<<"Masukan Bilangan Kedua: ";
        cin>>b;
        cout<<a<< " Bagi "<<b<<" = "<< pembagian(a,b)<<endl;
        break;
     case 3:
        cout<<"Penjumlahan \n";
        cout<<"Masukan Bilangan Pertama: ";
        cin>>a;
        cout<<"Masukan Bilangan Kedua: ";
        cin>>b;
        cout<<a<< " Tambah "<<b<<" = "<< penjumlahan(a,b)<<endl;
        break;
     case 4:
        cout<<"Pengurangan \n";
        cout<<"Masukan Bilangan Pertama: ";
        cin>>a;
        cout<<"Masukan Bilangan Kedua: ";
        cin>>b;
        cout<<a<< " Kurangi "<<b<<" = "<< pengurangan(a,b)<<endl;
        break;
     case 5:
        cout<<"Pangkat \n";
        cout<<"Masukan Bilangan Pertama: ";
        cin>>a;
        cout<<"Masukan Bilangan Kedua: ";
        cin>>b;
        cout<<a<< " Pangkat "<<b<<" = "<< pangkat(a,b)<<endl;
        break;
    default:
        cout<<"ERROR, PILIHAN TIDAK TERSEDIA!! \n";
        break;
    }
    cout<<"Terimakasih";
 return 0;
}
