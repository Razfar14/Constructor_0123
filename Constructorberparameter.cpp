#include <iostream>
using namespace std;

class mahasiswa{
   public :
       mahasiswa(string nama, int nim);
};

mahasiswa::mahasiswa(string nama, int nim){
    cout << "Constructor Dengan Parameter Terpanggil" << endl;
    cout << "Nama : " << nama << endl;
    cout << "NIM : " << nim << endl;
};