#include <iostream>
using namespace std;

const int BarangPenuh = 111; 
int tanggal[BarangPenuh];
string barang [BarangPenuh];
string nama [BarangPenuh];
string status [BarangPenuh];
int totalBarang = 0;



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


void inputBarang(){
    int run;
    if(totalBarang >= BarangPenuh){ 
        cout<<"Maaf, sudah full kapasitas";
    } 

        cout<<" === INPUT BARANG BARU === "<<endl;
        while (true){ 
cout<<"1. isi"<<endl<<"2. Selesai"<<endl; 
cout<<"Pilih salah satu : ";
cin>>run;
cout<<endl;
cin.ignore(); 
        

if (run==2){
    cout<<"Program selesai"<<endl;
    break;
}

else if (run==1){
cout<<"Nama Barang                   : "; 
getline(cin,barang[totalBarang]);

cout<<"Nama Peminjam                 : "; 
getline(cin,nama[totalBarang]);

cout<<"Tanggal pinjam                : "; 
cin>>tanggal[totalBarang];

status[totalBarang] = "Sedang Dipinjam"; 
cout<<"Status Peminjaman             : " << status[totalBarang] <<endl; 

 totalBarang++; 
  cout<<endl;
}
else { 
    cout<<"Input tidak valid"<<endl<<endl;
}
 
}

    }



void daftarBarang(){

    if(totalBarang<=0){ 
        cout<<"Barang tidak ada"<<endl<<endl;

    } else{ 
for(int x=0; x<totalBarang; x++){ 
    cout<<"Data Ke-"<<x+1<<endl; 

    cout<<"Nama Barang              = "<<barang[x]<<endl;
    cout<<"Nama Peminjam            = "<<nama[x]<<endl;
    cout<<"Tanggal pinjam           = "<<tanggal[x]<<endl; 
    cout<<"Status Peminjaman        = "<<status[x]<<endl; 
    cout<<endl;
}
    }


}


void tandaiBarang()

{
    
    daftarBarang();

    int tandaiBarang;
    if (totalBarang >= 1) { 
    
        cout << "Input nomor barang yang mau ditandai = ";
        cin >> tandaiBarang; 
        cout<<endl;

        int arrayBarang = tandaiBarang - 1; 
        if (arrayBarang < 0 or arrayBarang > totalBarang){
            cout << "Nomor barang tidak valid" << endl;
        }
        else
        {
            status[arrayBarang] = "Sudah dikembalikan";

            cout << "Barang nomor "<<tandaiBarang<<" Sudah dikembalikan" << endl<<endl;
        }

}
}


void cariBarang(){
  
  string cariBarang;

  cout<<"Masukkan nama barang yang ingin dicari : ";
  cin.ignore();
  getline(cin, cariBarang);
  cout<<endl;

  for(int x=0; x<totalBarang; x++){ 
    if (barang[x] == cariBarang){ 
    cout << "======== Barang ditemukan =======" << endl;
    cout<<"Nama Barang              = "<<barang[x]<<endl;
    cout<<"Nama Peminjam            = "<<nama[x]<<endl;
    cout<<"Status Peminjaman        = "<<status[x]<<endl;
    cout<<"Tanggal pinjam           = "<<tanggal[x]<<endl;
    cout<<endl;
  }  
  }
}



void hitungBarang(){

    int status_belumKembali = 0; 
    if (totalBarang<=0) { 
        cout << "Belum ada data pinjaman" << endl;
    } else { 
        for (int i=0;i<totalBarang;i++){ 
            if (status[i] == "Sedang Dipinjam"){ 
                status_belumKembali++; 
            }
        } cout << "Total Barang yang Belum Kembali = " << status_belumKembali << endl;

    } 
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
            cout<<"Terima kasih sudah mengembalikan barang yang kamu pinjam :D"<<endl;
            running = false; 
            break;

            default :
            cout<<"tidak valid"<<endl; 
        }
    }
    return 0;
}
