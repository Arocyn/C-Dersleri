#include <stdio.h>
#include <stdlib.h>

int main(){

    int x=0;    /* Tanýmla+Deðer Verme */

    int y;      /*Tanýmlama     */
    y=0;        /*Deðer Verme   */

    /*
        Burada deðiþkenimizi tanýmladýk
        Veri Tipleri kullaýmý >> veri türü isim; >> isim=deðer
        int     Tam sayýlar için kullanýlýr.
        fload   Virgüllü sayýlar için kullanýlýr.
        char    Karakterler için kullanýlýr.

    */

    printf("Bir sayi giriniz.");
    scanf("%i", &x);            /* scanf ile kullanýcýdan girdi alýrýz. */
    printf("\n Girdiginiz sayi= %i \n", x);

    system("pause");
    return 0;
}
