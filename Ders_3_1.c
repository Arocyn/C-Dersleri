#include <stdio.h>

int main(){

    int a = 11;
    /*
        Ýkili bir ţekilde gösterdiđim iţlemlerde hiç bir fark yok
        Sadece kullaným kolaylýđý ve gömülü sistemler için 2.sini
        tercih etmenizin iyi olacađý kanýsýndayým.
    */

    a = a + 2;
    printf("%d\n", a);
    a += 2;
    printf("%d\n", a);
    a = a - 3;
    printf("%d\n", a);
    a -= 3;
    printf("%d\n", a);
    a = a * 4;
    printf("%d\n", a);
    a *= 4;
    printf("%d\n", a);
    a = a / 11;
    printf("%d\n", a);
    a /= 11;
    printf("%d\n", a);
    a = a % 5;
    printf("%d\n", a);
    a %= 5;
    printf("%d\n", a);
    
    system("pause");
 
return 0;
}
