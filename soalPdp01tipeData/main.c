#include <stdio.h>
#include <stdlib.h>

/* contoh membaca integer dan float*/
/* kemudian menuliskan nilai yang dibaca */
int main () {
/* Kamus */
    int a;
    float b;
    char c;
    char d[20];
/* Program */
    printf ("Membaca dan menulis, ketik nilai integer: "); scanf ("%i", &a);
    printf ("Nilai yang dibaca : %i \n", a);
    printf ("Membaca dan menulis, ketik nilai float: "); scanf ("%f", &b);
    printf ("Nilai yang dibaca : %f \n", b);
    printf ("Membaca dan menulis, ketik karakter: "); scanf ("%s", &c);
    printf ("Karakter yang dibaca : %c \n", c);
    printf ("Membaca dan menulis, ketik kata: "); scanf ("%s", &d);
    printf ("Kata yang dibaca : %s \n", d);
    return 0; }
