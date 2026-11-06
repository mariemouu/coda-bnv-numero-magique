#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int random_number = rand() % 100 + 1;
    int number = 0;
    int attempts = 0;
    char first_name[50];

    printf("Salut ! C'est quoi ton prénom ? ");
    scanf("%s", first_name);
    printf("Ok %s, j'ai caché un nombre entre 1 et 100. Tu as 5 essais. Bonne chance (tu vas en avoir besoin).\n", first_name);

    while (number != random_number && attempts < 5) {
        printf("Essai %d/5 : ", attempts + 1);
        scanf("%d", &number);
        attempts = attempts + 1;

        if (number > random_number) {
            printf("Trop haut %s ! Redescends sur terre.\n", first_name);
        } else if (number < random_number) {
            printf("Trop bas ! Vise plus haut, champion.\n");
        } else {
            printf("INCROYABLE %s ! Trouvé en %d essai(s).?\n", first_name, attempts);
        }
    }

    if (number != random_number) {
        printf("Perdu %s... Le nombre magique était %d. Retente ta chance !\n", first_name, random_number);
    }

    return (0);
}
