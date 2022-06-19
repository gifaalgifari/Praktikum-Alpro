#include <iostream>

using namespace std;
 
struct mahasiswa{
    string nama;
    string nim;
    string jurusan;
    string ipk;
    string fakultas;
};
 
int main(){
 
    mahasiswa ms;
    
    ms.nama="muhammad mustopa albagdadi";
    ms.nim="170699746";
    ms.jurusan="alquran dan tafsir";
    ms.ipk="3,7";
    
    cout<<"              DATA MAHASISWA       "<<endl;
    cout<<"======================================"<<endl;
    cout<<"Nama     : "<<ms.nama<<endl;
    cout<<"NIM      : "<<ms.nim<<endl;
    cout<<"Jurusan  : "<<ms.jurusan<<endl;
    cout<<"IPK      : "<<ms.ipk<<endl;
      
    return 0;
}
