#include <iostream>
using namespace std;

class mahasiswa{
public :
    mahasiswa();
};

mahasiswa::mahasiswa(){
    cout << "Constructor dipanggil" << endl;
};

int main(){
    mahasiswa mhs;
    return 0;
}