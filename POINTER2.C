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
    float *px;    // deklarasi pointer 'px' dengan tipe variabel float
    float y;     // deklarasi variabel biasa 'y' dengan tipe float
    int x = 1234; // deklarasi variabel 'x' bertipe integer dan mengisi nilainya dengan 1234
    
    px = &x;      // SALAH: Pointer float 'px' menunjuk ke alamat variabel integer 'x'. Tipe data tidak cocok.
    y = *px;     // Mengambil nilai integer dari 'x', tapi dibaca menggunakan variabel bertipe float itu akan menghasilkan nilai yang error
    
    printf("u = %d\n", x);   // Mencetak nilai 'x' sebagai integer 
    printf("y = %f\n", y); // Mencetak nilai 'nu' sebagai float 
    printf("alamat y = %p\n", &y);
    return 0; // Mengakhiri program dengan status sukses
}

/*tracing :
px = diisi dengan ALAMAT MEMORI dari variabel x
y = diisi dengan NILAI yang berada di alamat memori yang ditunjuk oleh px (proses dereference)
x = 1234
y = 0,0000 (Karena px adalah pointer float,ia membaca biner integer 1234 dengan standar pecahan float.
    Pola biner tersebut terbaca sebagai angka yang sangat kecil mendekati nol sehingga dibulatkan menjadi 0.000000.  tidak cocok tipe data).
alamat y =  0061FF18, ini adalah alamat y*/ 
