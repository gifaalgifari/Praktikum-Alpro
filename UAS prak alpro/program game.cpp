#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

//warna untuk map
void setcolor(unsigned short color)
{
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hCon, color);
}
// struct perampok
struct perampok{
	string nama;
	int jumlahRampasan;
};
//struct penambang
struct player{
	string nama;
	int kekayaan;
	void dirampok(perampok *perampok){
		int hartaAwal = kekayaan;
		cout<<"kamu dirampok oleh "<<perampok->nama<<endl;
		kekayaan -= perampok->jumlahRampasan;
		cout<<"kekayaan kamu berkurang dari "<<hartaAwal<<" menjadi " <<kekayaan<<endl;
	}
};
//struct barang emas permata
struct barang{
	string nama;
	int harga;
	void menemukanBarang(player *player){
		int hartaAwal = player->kekayaan;
		cout<<"Kamu menemukan "<<nama<<endl;
		player->kekayaan += harga;
		cout<<"kekayaan kamu bertambah dari "<<hartaAwal<<" menjadi " <<player->kekayaan<<endl;
	}
};
// miner.cpp && miner.exe

int main() {
    // miner
    /*
    1 mencari barang tambang
    2 karakter di lambangkan #
    3 angka 8 digambarkan sebagai air
    4 angka 1 digambarkan sebagai tanah
    5 angka 4 digambarkan sebagai pohon
    6 angka 5 digambarkan sebagai pegunungan
    7 angka 6 digambarkan sebagai tebing
    */
 
 //judul game   
 cout<<"  __  __ ___ _   _ _____ ____            "<<endl; 
 cout<<" |  \/  |_ _| \ | | ____|  _ \           "<<endl; 
 cout<<" | |\/| || ||  \| |  _| | |_) |          "<<endl;
 cout<<" | | | || || |\  | |___|  _ <           "<<endl; 
 cout<<" |_| |_|___|_| \_|_____|_| \_\ THE GAME "<<endl;
 cout<<endl;                              
 cout<<"    ___________________________.'.------`"<<endl;
 cout<<"   '---------------------------.'        "<<endl;
 cout<<"     `.                      .'          "<<endl;
 cout<<"   .-//`.                  .'            "<<endl;
 cout<<".' .//.'/`================'              "<<endl;
 cout<<"=[=:====:=]=           \\||              "<<endl;
 cout<<"'. `--' .'             \_|               "<<endl;
 cout<<"  `-  -'                                 "<<endl;
 cout<<"================================================="<<endl;
 
 //define structur   
    player p1;
    p1.nama = "APIT";
    p1.kekayaan = 0;
    
    perampok r1;
    r1.nama = "BETY";
    r1.jumlahRampasan = 150;
    
    barang b1;
    b1.nama = "Emas";
    b1.harga = 50;
    
    barang b2;
    b2.nama = "Permata";
    b2.harga = 100;
 
 //luas peta   
    int panjangPeta = 20; // x
    int lebarPeta = 16; // y
 
 //posisi karakter   
    int posisiKarakterY = 15;
    int posisiKarakterX = 4;
    
    cout << "Karakter ada di y:" << posisiKarakterY << ", x:" << posisiKarakterX << "\n";
    cout<<"SELAMAT DATANG DI GAME PENCARIAN EMAS DAN PERMATA"<<endl;
    cout<<"================================================="<<endl;
    cout<<"peraturan dari game ini adalah karakter diharuskan mencari emas dan permata"<<endl;
    cout<<"yang telah di tentukan, lalu terdapat perampok yang akan merampas, jadi kita"<<endl;
    cout<<"diharuskan untuk menghindari siperampok tersebut."<<endl;
    cout<<"tekan apa saja untuk memulai game"<<endl;
//peta map    
    int peta[lebarPeta][panjangPeta] = {
        {8,8,8,8,8,8,1,1,1,1,1,1,1,1,1,1,1,4,4,4},
        {8,8,8,8,8,8,1,1,1,1,1,1,1,5,5,1,1,4,4,4},
        {8,8,8,1,1,1,1,1,1,1,1,1,1,5,5,1,1,4,4,4},
        {8,8,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,8,8,8,8,8,8,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,8,8,8,8,8,1,1,1,1,1,1,4,4,4,4,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,4,4,4,4,1,1,1},
        {1,1,1,5,5,1,1,1,1,1,4,4,4,4,4,4,4,1,1,1},
        {1,1,1,5,5,1,1,1,4,4,4,4,4,4,4,4,6,6,6,6},
        {1,1,5,5,1,1,1,1,4,4,4,4,4,4,4,4,4,1,1,1},
        {1,1,5,5,1,1,1,1,4,4,4,1,1,4,4,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,4,4,4,1,1,1,1,1,1,1,1,1},
        {4,4,4,4,4,1,1,1,4,4,4,1,1,1,1,1,1,1,1,1},
        {4,1,1,4,4,1,1,1,1,1,6,1,1,1,1,1,4,4,1,1},
        {4,4,1,4,4,1,1,1,1,1,6,1,1,1,1,1,4,4,1,1},
        {4,4,4,4,1,1,1,1,1,1,6,1,1,1,1,1,4,4,4,4},
    };
    
    
    int arrowKey = 0;
    
    /*
    #define KEY_UP 72
    #define KEY_DOWN 80
    #define KEY_LEFT 75
    #define KEY_RIGHT 77
    */

//    
    while(1) {
    	
    	if(p1.kekayaan >= 1000){
    		system("cls");
    		cout<<"SELAMAT KAMU SUDAH KAYA :)"<<endl;
    		cout<<"GAME SELESAI"<<endl;
    		break;
		}
		
		int peluang=rand()%10;
        // Input Keyboard
        
        char input;
        input = getch();
        
        //cout << "Masukan arrow key ";
        //cin >> arrowKey;
        //cout << "Arrow key yang dimasukan " << arrowKey << "\n";
        
        // Aturan menggerakkan karakter ke atas
        if(input==KEY_UP  && (peta[posisiKarakterY-1][posisiKarakterX] == 1 || peta[posisiKarakterY-1][posisiKarakterX] == 4) && posisiKarakterY >= 0) {
            // Gerakkan karakter ke atas
            posisiKarakterY = posisiKarakterY-1;
        }
        
        // Aturan menggerakkan karakter ke bawah
        if(input== KEY_DOWN && (peta[posisiKarakterY+1][posisiKarakterX] == 1 || peta[posisiKarakterY+1][posisiKarakterX] == 4) && posisiKarakterY < lebarPeta) {
            // Gerakkan karakter ke atas
            posisiKarakterY = posisiKarakterY+1;
        }
        
        // Aturan menggerakkan karakter ke kiri
        if(input ==KEY_LEFT && (peta[posisiKarakterY][posisiKarakterX-1] == 1 || peta[posisiKarakterY][posisiKarakterX-1] == 4) && posisiKarakterX >= 0) {
            // Gerakkan karakter ke atas
            posisiKarakterX = posisiKarakterX-1;
        }
        
        // Aturan menggerakkan karakter ke kanan
        if(input ==KEY_RIGHT && (peta[posisiKarakterY][posisiKarakterX+1] == 1 || peta[posisiKarakterY][posisiKarakterX+1] == 4) && posisiKarakterX < panjangPeta) {
            // Gerakkan karakter ke atas
            posisiKarakterX = posisiKarakterX+1;
        }
        
        if(input == 'q') {
          break;
        }
        
        system("cls");
        
        // Render grafik
        for(int y=0; y<lebarPeta; y++) {
            for(int x=0; x<panjangPeta; x++) {
                
                if(posisiKarakterX == x && posisiKarakterY == y) {
                	setcolor(13);
                    cout << "#" << " ";
                    setcolor(7);
                } else if(peta[y][x]==1){
                	setcolor(12);
                    cout << peta[y][x] << " ";
                    setcolor(7);
                }
                
                else if(peta[y][x]==5){
                	setcolor(5);
                    cout << peta[y][x] << " ";
                    setcolor(7);
                }
                
                else if(peta[y][x]==8){
                	setcolor(16);
                    cout << peta[y][x] << " ";
                    setcolor(7);
                }
                
                else if(peta[y][x]==4){
                	setcolor(2);
                    cout << peta[y][x] << " ";
                    setcolor(7);
                }
                
                else if(peta[y][x]==6){
                	setcolor(9);
                    cout << peta[y][x] << " ";
                    setcolor(7);
                }
            }
            cout << "\n";
               
        }
        //aturan menemukan emas permata dan perampok
        if(peta[posisiKarakterX][posisiKarakterY]==4){
		peluang*=rand()%10;
        if(peluang==2){
            	b1.menemukanBarang(&p1);
            	
			}
			
			else if(peluang==9){
				cout<<"kamu dirampok!!"<<endl;
				pilihan:
				cout<<"tekan Enter untuk kabur "<<endl;
				cout<<"tekan Esc untuk menyerahkan kekayaan"<<endl;
				int pilihan= getch();
				if(pilihan == 13){
					cout<<"kamu berhasil kabur"<<endl;
				}
				
				else if (pilihan==27){
					p1.dirampok(&r1);
				}
				else{
					goto pilihan;
				}
				
			}
			else if(peluang==1||peluang==0){
				b2.menemukanBarang(&p1);
			}
			
			}
    }
     
    
    return 0;
}
