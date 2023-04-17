#include <stdio.h>
#include <math.h>                                           // Math kütüphanesini ekledik

int main() {

    int a;                                                  // İlk kenar uzunluğunu a olarak tanımladık 
    int b;                                                  // İkinci kenar uzunluğunu b olarak tanımladık
    float c;                                                // İki kenarın karesinin toplamı değerini c olarak tanımmladık

    printf("Ucgenin kenar uzunliklarini giriniz: \n");      // Uzunluk girdilerini istedik
    scanf("%i", &a);                                        // İlk uzunluk girdisini a değerine atadık 
    scanf("%i", &b);                                        // İkinci uzunluk girdisini b değerine atadık

    double d = pow(a,2);                                    // a değerinin karesini alıp d değerine atadık 
    double e = pow(b,2);                                    // b değerinin karesini alıp e değerine atadık

    c = d + e;                                              // a ve b karelerinin toplamını c değerine atadık 

    double f = sqrt(c);                                     // c değerinin karekökünü alıp bunu f değerine atadık 

    printf("Ucgenin hipotenusu: %lf\n", f);                 // bulduğumuz değeri yazdıkdık

    return 0;
}
