#include <stdio.h>
#include <stdlib.h>

int n, i;
int randomNumber() {
    srand( time( NULL ) );
    n = rand() % 100;
}

int findNumber() {
    printf("Un nombre compris entre 1 et 100 a été généré, à vous de le retrouver !\n");
    scanf("%d", &i);
    while (i != n) {
        if (i > 100) {
            printf("Oups, ton nombre a dépassé les 100 !\n");
            scanf("%d", &i);
        } else if (i < 0) {
            printf("Ton nombre est inférieur à 0..\n");
            scanf("%d", &i);
        } else {
        printf("Raté ! Vous pouvez retenter\n");
        scanf("%d", &i);
        }
    }
    printf("Quel talent ! Tu es trop fort..\n");
}

int main()
{
randomNumber();
findNumber();

    return 0;
}
