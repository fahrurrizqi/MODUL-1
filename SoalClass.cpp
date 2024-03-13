#include <iostream>
#include <string>
using namespace std;

class Kendaraan {
private:
    string nama_brand;
    string no_kendaraan;
    string tipe_kendaraan;
    string berapa_cc;
    int tahun_produksi;

public:
    Kendaraan(const string& _nama_brand, const string& _no_kendaraan, const string& _tipe_kendaraan, const string& _berapa_cc, int _tahun_produksi) : 
        nama_brand(_nama_brand), no_kendaraan(_no_kendaraan), tipe_kendaraan(_tipe_kendaraan), berapa_cc(_berapa_cc), tahun_produksi(_tahun_produksi) {}

    void tampilkanInfo() {
        cout << "Informasi Kendaraan Anda\n";
        cout << "Pabrikan: " << nama_brand << endl;
        cout << "Tipe: " << tipe_kendaraan << endl;
        cout << "Nomor Kendaraan: " << no_kendaraan << endl;
        cout << "Besar cc: " << berapa_cc << endl;
        cout << "Tahun Produksi: " << tahun_produksi << endl;
    }
};

int main() {
    string nama_brand, no_kendaraan, tipe_kendaraan, berapa_cc;
    int tahun_produksi;

    cout << "Masukan informasi kendaraan\n";
    cout << "Nama Pabrikan Kendaraan: ";
    getline(cin, nama_brand);
    cout << "Tipe Kendaraan: ";
    getline(cin, tipe_kendaraan);
    cout << "Nomor Kendaraan: ";
    getline(cin, no_kendaraan);
    cout << "Besar cc Kendaraan: ";
    getline(cin, berapa_cc);
    cout << "Tahun Produksi Kendaraan: ";
    cin >> tahun_produksi;

    Kendaraan kendaraan1(nama_brand, no_kendaraan, tipe_kendaraan, berapa_cc, tahun_produksi);
    cout<<endl;
    cout<<endl;
    kendaraan1.tampilkanInfo();

    return 0;
}
