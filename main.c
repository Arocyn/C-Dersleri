#include <stdio.h>

int main() {

    int a;
    float b = 3.14;
    float d;
    float e;

    printf("Daire yaricapini giriniz:\n" );
    scanf("%d" , &a );
    d = a * b * a;
    e = a * b * 2;

    printf("Daire alaniniz: %f \n", d);
    printf("Daire cevreniz: %f \n" , e);

    return 0;

}
