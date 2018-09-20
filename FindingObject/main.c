#include <stdio.h>
#include <stdlib.h>

int main()
{
    int camera;
    float layar;
    char merek[15];
    printf("=====||IDENTIFIKASI SMARTHPHONE ANDA||=====\n");
    printf("Kamera belakang, tulis nilai  : ");scanf("%i",&camera);
    printf("Luas layar, tulis nilai saja : ");scanf("%f", &layar);
    printf("Merek smarth phone anda : ");scanf("%s", &merek);
    printf("Jadi smarth phone anda, memiliki : kamera belakang %i pixels, lebar layar %.2f inch, dan merek %s ",camera,layar, merek);

    return 0;
}
