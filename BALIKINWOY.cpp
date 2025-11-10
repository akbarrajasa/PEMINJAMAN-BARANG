#include <iostream>
using namespace std;

int main() {

/* yash kita akan buat program nyatet barang yang dipinjem
pembagian tugasnya perfitur, jadi kita totally akan buat 5 fitur
1. input data peminjaman (Davina)
2. nampilin semua data (Mahardika)
3. tandai barang yang udah dibalikin (Nadia)
4. liat barang yang belum dibalikin (Rima)
5. itung total barang yang belum dibalikin (Akbar)
6. cari barang (Akbar)
karena mode ambis jadi 5+1 fitur kebanggaan :)
*/

 int tanggal[111];
string barang [111];
string nama [111];
string status [111];

int array = 0;
int i;
string bulan;
cout<<"Data peminjaman pada bulan = ";
cin>>bulan;

while (true){
cout<<"1. isi"<<endl<<"2. Selesai"<<endl;
cout<<"Pilih salah satu : ";
cin>>i;


if (i==2){
    cout<<"Program selesai"<<endl;
    break;
}

getline(cin,barang[array]);
cout<<endl;

cout<<"Nama Barang                   : ";
getline(cin,barang[array]);

cout<<"Nama Peminjam                 : ";
getline(cin,nama[array]);

cout<<"Status Peminjaman             : ";
getline(cin,status[array]);

cout<<"Tanggal pinjam                : ";
cin>>tanggal[array];
 array++;
 
}
return 0;

}
