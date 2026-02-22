/* STUDI KASUS : */
/* - Eksekusi file program tersebut dan pahami maksud program ini */
/* - Komentari setiap baris program (maksud tiap pernyataan di tiap baris program ) */
/* - Tambahkan pernyataan untuk menampilkan Alamat varabel y, eksekusi, dan perhatikan hasilnya */
/* - Bila pernyataan px = &x; diganti dengan y = *px; ,apa yang terjadi? */
/* - Tulis hasil pemahaman Anda pada kertas yang disediakan */
/* --------------------------------------------------------- */
/* File Program : PTR2.CPP */
/* Contoh pemakaian pointer yang salah */
/* Tujuan : mengetahui panjang dan posisi variabel di memory */
/* --------------------------------------------------------- */
#include <stdio.h> // Mengimpor library standar agar bisa menggunakan fungsi printf

int main()
{
    float *pu;    // deklarasi pointer 'pu' dengan tipe variabel float
    float nu;     // deklarasi variabel biasa 'nu' dengan tipe float
    int u = 1234; // deklarasi variabel 'u' bertipe integer dan mengisi nilainya dengan 1234
    
    pu = &u;      // SALAH: Pointer float 'pu' menunjuk ke alamat variabel integer 'u'. Tipe data tidak cocok.
    nu = *pu;     // Mengambil nilai integer dari 'u', tapi dibaca menggunakan variabel bertipe float itu akan menghasilkan nilai yang error
    
    printf("u = %d\n", u);   // Mencetak nilai 'u' sebagai integer (Berhasil: 1234)
    printf("nu = %f\n", nu); // Mencetak nilai 'nu' sebagai float (error, menghasilkan 0.000000)
    
    return 0; // Mengakhiri program dengan status sukses
}

// HASIL u 1234
// HASIL nu 0.000000