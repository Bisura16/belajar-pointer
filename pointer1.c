#include <stdio.h>

int main()
{
    int a, b;
    int *pa;
    
    a = 10;
    pa = &a;
    b = *pa;
    
    // Ini bagian yang sedikit kubedakan
    *pa = 25; 
    
    printf("Nilai a = %d\n", a);
    printf("Nilai b = %d\n", b);
    printf("Nilai yang ditunjuk pa = %d\n", *pa);
    
    return 0;
}