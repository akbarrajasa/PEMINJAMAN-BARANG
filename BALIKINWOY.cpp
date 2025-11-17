#include <iostream>
using namespace std;

//deklarasi variabel utama dulu
const int BarangPenuh = 111; //batas barang sampai 111
int tanggal[BarangPenuh];
string barang [BarangPenuh];
string nama [BarangPenuh];
string status [BarangPenuh];
int totalBarang = 0;


//buat menu pilihan 0-5
//program jalan sesuai pilihan menu dari usernya
void tampilkanMenu(){
    cout<<" ==== SISTEM PEMINJAMAN BARANG === "<<endl;
    cout<<"1. Input barang baru "<<endl;
    cout<<"2. Daftar barang yang belum kembali "<<endl;
    cout<<"3. Tandai barang yang sudah kembali "<<endl;
    cout<<"4. Cari Barang "<<endl;
    cout<<"5. Jumlah barang yang belum kembali"<<endl;
    cout<<"0. Keluar dari Program"<<endl<<endl;
    cout<<"Pilih Menu 0-5"<<endl;
}

//program untuk menu 1 (tambah barang)
void inputBarang(){
    int run;
    if(totalBarang >= BarangPenuh){ //kondisi kalo jumlah inputan udah lebih dari 111
        cout<<"Maaf, sudah full kapasitas";
    } 

        cout<<" === INPUT BARANG BARU === "<<endl; //judul menu 1
//looping untuk input barangnya
        while (true){ 
cout<<"1. isi"<<endl<<"2. Selesai"<<endl; 
cout<<"Pilih salah satu : ";
cin>>run;
cout<<endl;
cin.ignore(); //supaya getline yang bawah bisa kebaca
        
//kalo user ngeinput 2 berarti looping selesai
//kembali ke menu utama
if (run==2){
    cout<<"Program selesai"<<endl;
    break;
}
//kalo user input 1 bakal terus ngelooping
//pake getline karena supaya bisa kebaca satu kalimat
else if (run==1){
cout<<"Nama Barang                   : "; //input nama barang
getline(cin,barang[totalBarang]);

cout<<"Nama Peminjam                 : "; //input nama peminjam
getline(cin,nama[totalBarang]);

cout<<"Tanggal pinjam                : "; //input tanggal peminjaman 
cin>>tanggal[totalBarang];
status[totalBarang] = "Sedang Dipinjam";

cout<<"Status Peminjaman             : " << status[totalBarang] <<endl; //bagian ini otomatis keisi barangnya belum kembali

 totalBarang++; //jumlah barang dalam arraynya bertambah
 cout<<endl;
}
else { //kondisi kalo user milih inputan selain 1 dan 2
    cout<<"Input tidak valid"<<endl<<endl;
}
 
}

    }


//ini fungsi untuk nampilin barang yang sedang dipinjam
void daftarBarang(){

    if(totalBarang<=0){ //kondisi kalo belum ada inputan barang
        cout<<"Barang tidak ada"<<endl<<endl;

    } else{ //kalo ada, dia ngelooping buat ditampilin
for(int x=0; x<totalBarang; x++){
    cout<<"Data Ke-"<<x+1<<endl;

    cout<<"Nama Barang              = "<<barang[x]<<endl;
    cout<<"Nama Peminjam            = "<<nama[x]<<endl;
    cout<<"Status Peminjaman        = "<<status[x]<<endl;
    cout<<"Tanggal pinjam           = "<<tanggal[x]<<endl;
    cout<<endl;
}
    }


}

void tandaiBarang(){
  
}


void cariBarang(){
  
  string cari;
  cout << "fitur ini dipakai untuk mencari barang\n";
  cout << "=======================================" << endl;
  cout<<"Masukkan nama barang : ";
  cin.ignore();
  getline(cin, cari);
  for(int x=0; x<totalBarang; x++){
  if (barang[x] == cari){
    cout << "=======================================" << endl;
    cout << "Ini dia barang yang kamu cari\n";
    cout<<"Nama Barang              = "<<barang[x]<<endl;
    cout<<"Nama Peminjam            = "<<nama[x]<<endl;
    cout<<"Status Peminjaman        = "<<status[x]<<endl;
    cout<<"Tanggal pinjam           = "<<tanggal[x]<<endl;
    cout<<endl;
  }
  }
}


int hitungBarang(){




  return 0;
}


int main (){
    int pilihan;
    bool running = true;

    while(running) {
        tampilkanMenu();
        cout<<"Masukkan Pilihan Menu : ";
        cin>>pilihan;
        cout<<endl<<endl;

        switch (pilihan){

            case 1:
            inputBarang();
            break;

            case 2:
            daftarBarang();
            break;

            case 3:
            tandaiBarang();
            break;

            case 4:
            cariBarang();
            break;

            case 5:
            hitungBarang();
            break;

            case 0 :
            cout<<"Thanksss"<<endl;
            running = false;
            break;

            default :
            cout<<"tidak valid"<<endl;
        }
    }
    return 0;
}
