#include <stdio.h>
#include <stdlib.h>

int main(){

    int x=0;    /* Tanımla+Değer Verme */

    int y;      /*Tanımlama     */
    y=0;        /*Değer Verme   */

    /*
        Burada değişkenimizi tanımladık
        Veri Tipleri kullaımı >> veri türü isim; >> isim=değer
        int     Tam sayılar için kullanılır.
        fload   Virgüllü sayılar için kullanılır.
        char    Karakterler için kullanılır.

    */

    printf("Bir sayi giriniz.");
    scanf("%i", &x);            /* scanf ile kullanıcıdan girdi alırız. */
    printf("\n Girdiginiz sayi= %i \n", x);

    system("pause");
return 0;
}
