#include <iostream>
#include <map>
using namespace std;

int main() {
    string id;
    map<string, string> promo;

    promo["2314"] = "Diskon 10%";
    promo["2065"] = "Gratis Ongkir";
    promo["4563"] = "Cashback 15%";

    cout << "Daftar Kode Vocher:" << endl;
    for (const auto& pasangan : promo) {
        cout << pasangan.first <<endl;
    }
    cout<<"Pilih Salah Satu dan dapatkan promo spesial :) \n";

    cout<<"Masukan Kode Vocher: ";
    cin>>id;
    cout << "Selamat Anda Mendapatkan " << promo[id] << endl;
    return 0;
}
