#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int 4 byte %d tam say�lar
    double 8 byte %lf t�m her�ey
    float 4 byte %f ondal�kl� say�lar
    char 1 byte %c tek de�er
    */
    printf("Hello world!\n\nProgrami kullanirken her seyi Ingilizce yazima gore yapacagiz.\n\n");

    float sayi = 5.65;
    double sayi2 = 6.86;

    printf("Ilk sayim: %.2f \t Ikinci sayim: %.2lf\n\n",sayi,sayi2);

    char c='A';
    printf("Char karakter: %c\n\n",c);

    return 0;
}
