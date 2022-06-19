#include<iostream>
using namespace std;

void totalharga (int hargasatuan, int jumlahbarang, int diskon){
	
	int hargaAwal = hargasatuan * jumlahbarang;
	diskon = hargaAwal * diskon/100;
	int hargaAkhir = hargaAwal - diskon;
	
	cout<<"program perhitungan barang dsikon"<<endl;
	cout<<"================================="<<endl;
	cout<<"harga satuan      = RP." <<hargasatuan<<endl;
	cout<<"jumlah barang     =    " <<jumlahbarang<<endl;
	cout<<"harga awal        = RP." <<hargaAwal<<endl;
	cout<<"total diskon      = RP." <<diskon<<endl;
	cout<<"================================="<<endl;
	cout<<"total harga       = RP." <<hargaAkhir<<endl;
	
}

int main (){
	
	totalharga (5000, 10, 5);
	
	return 0;
}
