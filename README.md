# Sistem Pendataan Pasien Rumah Sakit Sederhana

Proyek ini adalah program sederhana yang ditulis dalam bahasa C++ (`rumahsakit2.cpp`) yang bertujuan untuk mengelola data 5 pasien rumah sakit dan menghitung biaya perawatan akhir, termasuk penerapan diskon BPJS.

---

### 📋 Prasyarat

* Kompilator C++ (seperti `g++`).

### 🚀 Fitur Utama

* **Input Data**: Menerima dan menyimpan data untuk 5 pasien, meliputi Nama, Jenis Penyakit, Alamat, dan Biaya Perawatan Awal.
* **Perhitungan Diskon BPJS**: Secara otomatis menghitung total biaya akhir (`biayaFinal`).
    * Jika pasien memiliki BPJS (`y` atau `Y`), akan diberikan **diskon 25%** dari biaya awal.
    * Jika tidak, biaya akhir sama dengan biaya awal.
* **Output Rincian**: Menampilkan kembali semua data pasien yang telah diinput beserta rincian Biaya Awal, Status BPJS, dan Total Biaya Perawatan Akhir.

---

### 💻 Cara Mengompilasi dan Menjalankan

1.  **Simpan Kode**: Pastikan kode C++ disimpan dalam file bernama `rumahsakit2.cpp`.
2.  **Kompilasi**: Gunakan perintah `g++` pada terminal:
    ```bash
    g++ rumahsakit2.cpp -o rumahsakit
    ```
3.  **Jalankan Program**: Eksekusi program yang sudah terkompilasi:
    ```bash
    ./rumahsakit
    ```
4.  **Input Data**: Program akan memandu Anda untuk memasukkan data untuk 5 pasien secara berurutan.

---

### 💡 Struktur Kode dan Logika

Program menggunakan *struct* untuk mengorganisasi data:

```cpp
struct DaftarPasien{
    string namapasien;
    string jenispenyakit;
    string alamatpasien;
    double biaya;       // Biaya Perawatan Awal
    double biayaFinal;  // Biaya Setelah Diskon BPJS
};
