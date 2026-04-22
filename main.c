#include <stdio.h>

int main() {
    int a,b,c;

    printf("Zadejte číslo A: ");
    scanf("%d", &a);
    printf("Zadejte číslo B: ");
    scanf("%d", &b);
    printf("Zadejte číslo C: ");
    scanf("%d", &c);

    int *p_a = &a;
    int *p_b = &b;
    int *p_c = &c;

    int soucet = *p_a + *p_b + *p_c;
    int maximum;

    if (*p_a > *p_b && *p_a > *p_c) {
        maximum = *p_a;
    } else if (*p_a > *p_b && *p_a < *p_c) {
        maximum = *p_c;
    } else {
        maximum = *p_b;
    }

    printf("Soucet: %d\n", soucet);
    printf("Maximum: %d\n", maximum);


    if (soucet % 2 == 0) {
        printf("Soucet je sudy");
    } else {
        printf("Soucet je lichy");
    }

    return 0;
}