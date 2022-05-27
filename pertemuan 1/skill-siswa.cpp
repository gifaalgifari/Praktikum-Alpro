#include <iostream>
using namespace std;

struct siswa_t
{
	int id;
	string nama;
	string jurusan;
	string umur;
};

int main()
{
	siswa_t siswa[] = {
	{1, "asrul","teknik mesin","18 tahun"},
	{2, "nina","multimedia","17 tahun"},
	{3, "bambang","teknik pengelasan","16 tahun"},
	{4, "samsul","teknik elektro","18 tahun"},
	{5, "sindi","desain grafis","18 tahun"},
	};
	
	int idSiswaYangHarusDikeluarkan = 4;
	
	siswa[3].nama = "bambang";
	
	for (int i = 0; i<5; i++){
		if(siswa[i].id == idSiswaYangHarusDikeluarkan){
			cout<<"dikarenakan belum cukup umur "<<siswa[i].nama<<" dikeluarkan dari test\n";
			
			break;
		}
		
		cout<<"siswa bernama "<<siswa[i].nama<<"  berumur "<<siswa[i].umur<<"\n";
	}
}
