#include <iostream>
using namespace std;

struct siswa_t
{
	int id;
	string nama;
	string jurusan;
	int umur;
};

int main(){
	
	int minimalumur=17;
	
	siswa_t siswa[] = {
	{1, "asrul","teknik mesin","18"},
	{2, "nina","multimedia","17"},
	{3, "bambang","teknik pengelasan","16"},
	{4, "samsul","teknik elektro","18"},
	{1, "sindi","desain grafis","17"},
};
	
	for (int i = 0; i<5; i++){
		if(siswa[i].umur>minimalumur){
			continue;
		}
		
		cout<<"selamat siswa bernama "<<siswa[i].nama<<"  berumur "<<siswa[i].umur<<" lolos test\n";
	}
}


