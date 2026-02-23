/* • Tulis kembali naskah program berikut kemudian eksekusi!
• Beri komentar program ‘secukupnya’ sehingga bila dibaca kembali akan mudah untuk dipahami!
• Tulis hasil pemahaman Anda terhadap maksud dari program berikut !
/* --------------------------------------------------------------------------------------------- */
/* File Program : PTR5.CPP */
/* Deskripsi : pointer ke type dasar, mendeklarasikan & alokasi variabel dinamik */
/* --------------------------------------------------------------------------------------------- */
#include <stdlib.h>
#include <stdio.h>
int main()
{
/* Kamus Data (deklarasi, inisialisasi nilai variabel)*/
int i = 5, j;
char c = 'X';
int *Ptri = (int *) malloc(4);
int *Ptrj = (int *) malloc(sizeof(int));
float *fx = (float *) malloc(sizeof(float));
int A[5];
float f = 7.23;
/* program */
*Ptri = 8;
*Ptrj = 0;
*fx = 3;
printf("Alamat i = %x \n", &i);
printf("Nilai i = %d \n", i);
printf("Ukuran int = %d byte\n\n", sizeof(int));
printf("Alamat j = %x \n", &j);
printf("Nilai j = %d \n", j);
printf("Alamat c = %x \n", &c);
printf("Nilai c = %c \n", c);
printf("Ukuran char = %d byte\n\n", sizeof(char));
printf("Alamat Ptri = %x \n", &Ptri);
printf("Isi var Ptri = %x \n", Ptri);
printf("Nilai yang ditunjuk oleh Ptri = %d \n", *Ptri);
printf("Ukuran pointer int = %d byte\n\n", sizeof(int *));
printf("Alamat Ptrj = %x \n", &Ptrj);
printf("Isi var Ptrj = %x \n", Ptrj);
printf("Nilai yang ditunjuk oleh Ptrj = %d \n", *Ptrj);
Ptrj = Ptri;
printf("Isi var Ptrj sekarang = %x \n", Ptrj);
printf("Nilai yang ditunjuk oleh Ptrj sekarang = %d \n", *Ptrj);
printf("Alamat A = %x \n", &A);
printf("Isi var A = %x \n", A[0]);
printf("Ukuran array A = %d byte\n\n", sizeof(A));
printf("Alamat f = %x \n", &f);
printf("Nilai f = %f \n", f);
printf("Ukuran float = %d byte\n\n", sizeof(float));
return 0;
}

/*i = 5
c = X
 A[5]
 f = 7.23
 ptri = 8
 ptrj = 0
 fx = 3
alamat i = alamat i tapi terpotong
nilai i = 5
ukuran byte = 4 byte
alamat j = alamat j tapi terpotong karena pakai x
nilai j = angka acak
alamat c = alamat c tapi terpotong
nilai c = X
ukuran char = 1 byte
alamat ptri = alamat ptri tapi terpotong
isi var ptri = angka acak
ukuran pointer = 4 byte
alamat ptrj = alamat ptrj
isi var ptrj = angka acak
nilai yg ditunjuk ptrj = 0
ptrj = 8 assignment
isi var ptrj = masih nilai acak
nilai yang ditunjuk ptrj = 8
alamat a = alamat a
isi variabel a = nilai acak
ukuran array a = 20
 alamat f = alamat f
 nilai =7.230000
 ukuran float = 4*/