#include <stdio.h>
#include <math.h>

int main() {

    int a;
    int b;
    float c;

    printf("Ucgenin kenar uzunliklarini giriniz: \n");
    scanf("%i", &a);
    scanf("%i", &b);

    double d = pow(a,2);
    double e = pow(b,2);

    c = d + e;

    double f = sqrt(c);

    printf("Ucgenin hipotenusu: %lf\n", f);

    return 0;
}
