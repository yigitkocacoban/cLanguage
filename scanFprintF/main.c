#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ilksayim;
    float ikincisayim;
    char basharf;

    printf("Lutfen isminizin bas harfini giriniz:\n\n");
    scanf("%c",&basharf);
    printf("Lutfen ilk sayiyi giriniz:\n\n");
    scanf("%d",&ilksayim);
    printf("\n");
    printf("Lutfen ikinci sayiyi giriniz:\n\n");
    scanf("%f",&ikincisayim);
    printf("\n");
    printf("\n");
    printf("Ilk Sayi: %d \t Ikinci Sayi: %.2f \t Adinizin Bas Harfi: %c\n\n", ilksayim, ikincisayim, basharf);
    return 0;
}
