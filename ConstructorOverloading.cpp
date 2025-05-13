#include <iostream>
using namespace std;

class mahasiswa{
    private:
        int nim;
        string nama;
    public:
        mahasiswa();
        mahasiswa(int);
        mahasiswa(string);
        mahasiswa(string iNama, int iNim);
        void cetak();
};
mahasiswa::mahasiswa(){
}

mahasiswa::mahasiswa(int iNim){
    nim = iNim;
}
mahasiswa::mahasiswa(string iNama){
    nama = iNama;
}