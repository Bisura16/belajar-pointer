/* STUDI KASUS : */
/* - Eksekusi file program tersebut dan pahami maksud program ini */
/* - Komentari setiap baris program (maksud tiap pernyataan di tiap baris program ) */

/* - Tulis hasil pemahaman Anda pada kertas yang disediakan */

/* --------------------------------------------------------- */
/* File Program : PTR3.CPP */
/* Contoh pengubahan isi suatu variabel melalui pointer */
/* Tujuan : Menggunakan type data pointer dan manipulasinya */
/* --------------------------------------------------------- */
#include <stdio.h>
int main()
{
float d, *pd; //deklarasi variabel dan pointer
d = 54.5; // mengisi d dengan 54.5
printf("Isi d semula = %g\n", d); //%g ialah untuk membuang angka nol yang tidak terpakai pada nilai variabel float dan double, misal variabel float a = 25.500, dengan pakai %g, menjadi 25.5
pd = &d; // pd mengambil nilai dari alamat memori d, dengan nilai 54.5
*pd = *pd + 10; // Nilai yang ditunjuk oleh pointer pd (yaitu 54.5) ditambah 10, lalu hasilnya (64.5) ditimpa kembali ke alamat tersebut.
printf("Isi d kini = %g\n", d); //sama seperti sebelumnya, %g ialah untuk menyederhanakan nilai variabel float dan double
return 0; // mengembalikan nilai 0 = berhasil
}
/* HASIL NYA IALAH :
d = 54.5
pd = 64.5
d kedua = 64.5 */