/* STUDI KASUS : */
/* - Eksekusi file program tersebut dan pahami maksud program ini */
/* - Komentari setiap baris program (maksud tiap pernyataan di tiap baris program ) */
/* - Tulis hasil pemahaman Anda pada kertas yang disediakan */

/* --------------------------------------------------------- */
/* File Program : PTR4.CPP */
/* Contoh pemakaian pointer */
/* --------------------------------------------------------- */
#include <stdio.h>
int main()
{
int z, s, *pz, *ps;
z = 20;
s = 30;
pz = &z;
ps = &s;
*pz = *pz + *ps;
printf("z = %d, s = %d\n", z , s);
return 0;
}

/*tracing
z= 20, berubah jadi 50
s = 30
pz = 20
ps = 30
pz = 50
z = 50
s = 30*/