#include <iostream>
using namespace std;

struct member_t
{
	int id;
    string nama;
    string jurusan;
    string alamat;
};

int main()
{
	member_t member[] = {
    	{1, "husna", "agro teknologi", "sumedang"},
        {2, "abdul", "Matematika", "bandung"},
        {3, "santi", "fisika", "bekasi"},
        {4, "usman", "informatika", "bogor"},
        {5, "adelia", "kimia", "jakarta"}};
       
        
 for(int i = 0; i < 5; i++) {
        
        if(i == 5) {
            continue;
        }       
        
        cout << "mahasiswa yang bernama " << member[i].nama << " dari " << member[i].jurusan << " Lolos test\n";
        }
                
}
    
