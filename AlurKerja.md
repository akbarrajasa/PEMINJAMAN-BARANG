# Alur Kerja Program Peminjaman Barang

## 1. Menu Utama
>User memilih menu untuk masuk ke dalam program (0-5)

## 2. Tambah peminjaman barang
1. User pilih menu 1 di tampilan utama
2. Program cek apakah total peminjaman < [111],
   jika penuh kembali ke menu utama
3. Program melakukan perulangan (while) = lanjut/tidak 
4. Jika user memilih lanjut, maka perulangan terus bekerja
Program meminta input :
        - Nama Barang
        - Nama Peminjam
        - Tanggal pinjam
        - Status Peminjaman (otomatis terisi = Belum Kembali)
input disimpan ke array variabel masing masing
4. total peminjaman ditambah 1
5. Program menampilkan pesan "Data berhasil ditambahkan"
6. Program kembali melakukan perulangan (while) = lanjut/tidak 
7. Jika user memilih tidak, maka program kembali ke menu utama

## 2. Lihat semua peminjaman
1. User memilih menu 2 di tampilan utama
2. Program cek apakah data kosong.
   Jika kosong tampilkan pesan "Belum ada data peminjaman"
   Lalu kembalu ke menu utama
3. Jika ada data
   - Program menampilkan semua peminjaman dalam bentuk daftar nomor
   > Nama Barang.
   > Nama Peminjam.
   > Tanggal Pinjam.
   > Status peminjaman (Otomatis terisi "Sedang DIpinjam")
4. Setelah program tampil, kembali ke menu utama

## 3. Tandai Barang sudah dikembalikan
1. User pilih nomor 3 di tampilan menu utama
2. Program cek apakah data kosong.
   Jika kosong tampilkan pesan "Belum ada data peminjaman"
   Lalu kembalu ke menu utama
3. Jika data ada, tampilkan semua barang beserta statusnya
4. Program meminta input nomor bnarang yang ditandai
5. Program ngecek barang.
   Jika <1 atau >total barang, maka tampilkan "Nomor tidak valid"
6. Jika valid program ubah status menjadi Sudah kembali
7. Program menampilkan pesan "Barang berhasil ditandai"
8. Kembali ke menu utama

## 4. Cari Barang
1. User pilih nomor 4
2. 2. Program cek apakah data kosong.
   Jika kosong tampilkan pesan "Belum ada data peminjaman"
   Lalu kembalu ke menu utama
3. Program meminta input nama barang yang ingin dicari
4. Program melakukan pencarian.
   Jika ditemukan, tampilkan seluruh data barang
   Jika tidak ditemukan, tampilkan pesan "Barang tidak ditemukan"
5. Kembali ke menu utama

## 5. Hitung total barang yang belum kembali
1. User pilih nomor 5
2. Program cek apakah data kosong.
   Jika kosong tampilkan pesan "Belum ada data peminjaman"
   Lalu kembalu ke menu utama
3. Program menghitung jumlah item yang belum kembali
4. Tampilkan hasilnya "Total barang yang belum kembali = x"
5. Program kembali ke menu utama

Semangatt!!!
