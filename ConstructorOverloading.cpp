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
        mahasiswa(int iNim, string iNama);
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
void mahasiswa::cetak(){
    cout << "NIM : " << nim << endl;
    cout << "Nama: " << nama << endl;
}

int main(){
    mahasiswa mhs1 (102032);
    mahasiswa mhs2 ("Andi");
    mahasiswa mhs3 (102032, "Santi");

    cout << "Mahasiswa 1"; mhs1.cetak();
    cout << "Mahasiswa 2"; mhs2.cetak();
    cout << "Mahasiswa 3"; mhs3.cetak();
    return 0;
}