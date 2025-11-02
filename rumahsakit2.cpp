#include <iostream>
#include <string>

using namespace std;

struct DaftarPasien{
    string namapasien;
    string jenispenyakit;
    string alamatpasien;
    double biaya;
    double biayaFinal;
};

int main(){
    DaftarPasien dafpas[5];
    char pilihanBPJS;

    for (int i = 0; i < 5; i++) {
        cout << "Masukan data pasien ke-" << i + 1 << ":\n";

        cout << "Nama: ";
        cin.ignore();
        getline(cin, dafpas[i].namapasien);

        cout << "Jenis Penyakit: ";
        getline(cin, dafpas[i].jenispenyakit);

        cout << "Alamat Pasien: ";
        getline(cin, dafpas[i].alamatpasien);

        cout << "Biaya Perawatan: ";
        cin >> dafpas[i].biaya;

        cout << "Apakah pasien memiliki BPJS? (y/n): ";
        cin >> pilihanBPJS;

        if (pilihanBPJS == 'y' || pilihanBPJS == 'Y') {
            dafpas[i].biayaFinal = dafpas[i].biaya * 0.75;
        } else {
            dafpas[i].biayaFinal = dafpas[i].biaya;
        }
        cout << "-----------------------\n";
    }

    cout << "\n=====================\n";
    cout << "Data Pasien:\n";
    cout << "=====================\n";


    for (int i = 0; i < 5; i++){
        cout << "Data pasien ke-" << i + 1 << ":\n";
        cout << "Nama: " << dafpas[i].namapasien << "\n";
        cout << "Jenis Penyakit: " << dafpas[i].jenispenyakit << "\n";
        cout << "Alamat Pasien: " << dafpas[i].alamatpasien << "\n";
        cout << "Biaya Awal: Rp" << dafpas[i].biaya << "\n";

        if (dafpas[i].biaya != dafpas[i].biayaFinal) {
            cout << "Status BPJS: Ya (Diskon 25%)\n";
        } else {
            cout << "Status BPJS: Tidak\n";
        }

        cout << "Total Biaya Perawatan: Rp" << dafpas[i].biayaFinal << "\n";
        cout << "-----------------------\n";
    }

    return 0;
}
