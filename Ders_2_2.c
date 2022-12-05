#include <stdio.h>
#include <stdlib.h>

int main(){
    int level = 297;
    float xp = 2574.46;
    char server = "T";
    char nick[] = "Arocyn";
    float kxp = 2425.54;

    printf("Merhaba %s \n", nick);
    printf("Su anda %d level'e sahipsin.\n", level);
    printf("%f xp'ye sahipsin. \n", xp);
    printf("Sen su an %c serverinde oynuyorsun. \n", server);

    printf("Yeni level icin kac xp kaldigini ogrenmek ister misin \n");
    printf("Isteyecegini biliyorum o da %f \n", kxp);

    system("pause");
}
