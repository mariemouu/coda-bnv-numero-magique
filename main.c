#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int random_number = rand() % 100 + 1;
    int number;

    printf("Devine le nombre magique entre 1 et 100 : ");
    scanf("%d", &number);

    return (0);
}
