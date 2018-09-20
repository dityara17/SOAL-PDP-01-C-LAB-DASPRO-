#include <stdio.h>
#include <stdlib.h>

int main()
{

    int alas;
    int tinggi;
    int luas;
    int s1;
    int s2;
    int s3;

    printf("=====||MENGHITUNG LUAS SEGITIGA||=====\n");
    printf("Masukkan nilai alas: ");scanf("%i",&alas);
    printf("Masukkan nilai tinggi : ");scanf("%i",&tinggi);
    printf("Hasilnya adalah: %i \n", alas*tinggi/2);
    printf("=====||MENGHITUNG KELILING SEGITIGA||=====\n");
    printf("Masukkan sisi 1: ");scanf("%i",&s1);
    printf("Masukkan sisi 2: ");scanf("%i",&s2);
    printf("Masukkan sisi 3: ");scanf("%i",&s3);
    printf("Hasil keliling segi tiga adalah : %i",s1+s2+s3);

    return 0;
}
