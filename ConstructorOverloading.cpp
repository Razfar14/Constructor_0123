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
}