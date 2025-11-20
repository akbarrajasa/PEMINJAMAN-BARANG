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

status[totalBarang] = "Sedang Dipinjam"; //bagian ini otomatis keisi barangnya belum kembali
cout<<"Status Peminjaman             : " << status[totalBarang] <<endl; //Sedang dipinjam masuk ke dalam array status

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
for(int x=0; x<totalBarang; x++){ //looping berjalan sampe total barang
    cout<<"Data Ke-"<<x+1<<endl; //x adalah array, untuk menyesuaikan nomor asli berarti x + 1

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
    // tampilin daftar barang
    daftarBarang();

    int tandaiBarang;
    if (totalBarang >= 1) { //dicek dulu di dalemnya ada barang apa nggak, kalo ada lanjut input nomor
    
        cout << "Input nomor barang yang mau ditandai = ";
        cin >> tandaiBarang; 
        cout<<endl;

        //karena barangnya disimpen dalam array, harus dikonversiin dulu ke array
        //berarti supaya nomor inputan sesuai sama array, inputan harus -1 untuk dapetin index arraynya
        int arrayBarang = tandaiBarang - 1; 
        //dicek lagi kalo ternyata nomornya itu kurang dari 0 atau lebih dari total barang program gak jalan
        if (arrayBarang < 0 or arrayBarang > totalBarang){
            cout << "Nomor barang tidak valid" << endl;
        }
        //tapi kalo bener statusnya yang tadi "Sedang dipinjam" berubah jadi "Sudah dikembalikan"
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

  for(int x=0; x<totalBarang; x++){ //looping supaya program tau ada barang apa aka
  if (barang[x] == cariBarang){ //dicek, apakah inputan sama dengan nama barang dalam arraynya
    //kalo sama, keluar informasi data barangnya
    cout << "======== Barang ditemukan ======="<<endl;
    cout<<"Nama Barang              = "<<barang[x]<<endl;
    cout<<"Nama Peminjam            = "<<nama[x]<<endl;
    cout<<"Status Peminjaman        = "<<status[x]<<endl;
    cout<<"Tanggal pinjam           = "<<tanggal[x]<<endl;
    cout<<endl;
  } 
  
  }
}



void hitungBarang(){

    int status_belumKembali = 0; //deklarasi variabel awal
    if (totalBarang<=0) { //cek kondisi kalo belum ada barang
        cout << "Belum ada data pinjaman" << endl;
    } else { //kondisi kalo ada barang
        for (int i=0;i<totalBarang;i++){ //looping buat ngecek per array nya
            if (status[i] == "Sedang Dipinjam"){ //cek status apakah valid atau nggak
                status_belumKembali++; //akan terus bertambah 1
            }
        } cout << "Total Barang yang Belum Kembali = " << status_belumKembali << endl;

    } 
}

int main (){
    int pilihan;
    bool running = true;

    //while akan terus berjalan jika kondisinya true
    //deklarasi awal running itu true
    //jadi ketika nilai running belum diubah jadi false, maka looping terus jalan
    while(running) {
        tampilkanMenu(); //manggil fungsi tampilkan menu
        cout<<"Masukkan Pilihan Menu : ";
        cin>>pilihan;
        cout<<endl<<endl;

        switch (pilihan){ //switch case dipake karena gak ada kondisi lagi dalam percabangannya

            case 1:
            inputBarang(); //kalo kita input menu 1, manggil fungsi input barang
            break;

            case 2:
            daftarBarang(); //kalo kita input menu 2, manggil fungsi daftar barang
            break;

            case 3:
            tandaiBarang(); //kalo kita input menu 3, manggil fungsi tandai barang
            break;

            case 4:
            cariBarang(); //kalo kita input menu 4, manggil fungsi cari barang
            break;

            case 5:
            hitungBarang(); //kalo kita input menu 5, manggil fungsi hitung barang
            break;

            case 0 :
            cout<<"Thanksss"<<endl;
            running = false; //nah kalo kita input menu 0, running nya berubah jadi false, loopingnya berenti
            break;

            default :
            cout<<"tidak valid"<<endl; // kalo inputan selain dari menu yang tersedia maka program error
        }
    }
    return 0;
}
