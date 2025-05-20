#include <iostream>
using namespace std;

// Buatlah program C++ dengan class barang yang memiliki atribut namaBarang dan KodeBarang
// program memiliki constuktor berparameter untuk mengisi nilai atribut
// dan menapilkan informasi barang

class Barang {
public:
    string namaBarang;
    int kodeBarang;
    
    Barang(string namaBarang, int kodeBarang) {
        this->namaBarang = namaBarang;
        this->kodeBarang = kodeBarang;
    }
    

    void tampilkanInfo() {
        cout << "Nama Barang: " << namaBarang << endl;
        cout << "Kode Barang: " << kodeBarang << endl;
    }
};

int main() {
Barang brng1("Pensil", 101);
Barang brng2("Buku", 102);
brng1.tampilkanInfo();
brng2.tampilkanInfo();
return 0;
}