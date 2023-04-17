#include <stdio.h>

int main() {

    int a;                                      // Yarıçap a değerimiz
    float b = 3.14;                             // pi değerini belirledik
    float d;                                    // d değişkeninde alan verisini sakladık
    float e;                                    // e değişkeninde çevre verisini sakladık

    printf("Daire yaricapini giriniz:\n" );     // Yarıçap değerini istedik
    scanf("%d" , &a );                          // Girilen değeri a değişkenine atadık
    d = a * b * a;                              // pir^2 formülü ile alanı bulduk 
    e = a * b * 2;                              // 2pir ile çevreyi hesapladık

    printf("Daire alaniniz: %f \n", d);         // Bulduğumuz alan değerini yazdırdık
    printf("Daire cevreniz: %f \n" , e);        // Bulduğumuz çevre değerini yazdırdık

    return 0;

}
