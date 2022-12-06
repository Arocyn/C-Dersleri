#include <stdio.h>
#include <stdbool.h>

int main(){

    char a = 'A';                           // tek karakter    %c
    char b[] = "Arocyn";                    // karakter dizisi %s

    float c = 3.141592653589793;            // 4 bytes 6-7 basamaklı değerler %f
    double d = 3.141592653589793;           // 8 bytes 15-16 basamaklı değerler %lf

    bool e = false;                         // 1 byte (true veya false) %d

    char f = 128;                           // 1 byte (-128 <-> +127) %d veya %c
    unsigned char g = 1;                    // 1 byte (0 <-> +255) %d veya %c

    short h = 32768;                        // 2 bytes (−32,768 <-> +32,767) %d
    unsigned short i = 65535;               // 2 bytes (0 <-> +65,535) %d

    int j = 2147483647;                     // 4 bytes (-2,147,483,648 <-> +2,147,483,647) %d
    unsigned int k = 4294967295;            // 4 bytes (0 <-> +4,294,967,295) %u

    long long int l = 9223372036854775807;              // 8 bytes (-9 quintillion <-> +9 quintillion) %lld
    unsigned long long int m = 1844674407370955161;     // 8 bytes (0 <-> +18 quintillion) %llu

    printf("%c\n", a);                      // char - tek karakter
    printf("%s\n", b);                      // character array - karakter dizisi
    printf("%0.15f\n", c);                  // float - ondalıklı sayılar
    printf("%0.15lf\n", d);                 // double - ondalıklı sayılar
    printf("%d\n", e);                      // bool - true veya false
    printf("%c\n", f);                      // char - tek karakterin sayısal değeri
    printf("%c\n", g);                      // unsigned char - pozitif tek karakterin sayısal değeri
    printf("%d\n", h);                      // short - tam sayılar
    printf("%d\n", i);                      // unsigned short - pozitif tam sayıları
    printf("%d\n", j);                      // int - tam sayılar
    printf("%u\n", k);                      // unsigned int - pozitif tam sayılar
    printf("%lld\n", l);                    // long long int - tam sayılar
    printf("%llu\n", m);                    // unsigned long long int - pozitif tam sayılar

    return 0;
}
