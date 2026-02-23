/* --------------------------------------------------------- */
/* File Program : PTR1.CPP */
/* Contoh pemakaian pointer */
/* Tujuan : mengetahui panjang dan posisi variabel di memory */
/* --------------------------------------------------------- */
#include <stdio.h>
int main()
{
int x, y; // inisialisasi x dan y sebagai integer
int *px; // inisialisasi pointer px sebagai integer
x = 87; // x di assignment dengan nilai 87
px = &x; //px di assignment oleh alamat dari x
y = *px; // y di assignment oleh pointer px
printf("Alamat x = %p\n", &x); // print alamat x (%p)
printf("Isi px = %d\n", x); // print nilai integer x
printf("Nilai yang ditunjuk oleh px = %d\n", *px); //print nilai yang ditunjuk pointer px
printf("Nilai y = %d\n", y); // print nilai integer y
return 0; //balikin status keberhasilan
}

/*tracing :
x: 87
y: 87
px: 87
alamat x = 0061FF14
isi px = 87
nilai yang ditunjuk px = 87
nilai y = 87*/