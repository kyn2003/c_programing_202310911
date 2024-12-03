#include <stdio.h>

struct City {
    char name[50];
    char country[50];
    int population;
};

int main() {
    struct City cities[3];
    int i;

    printf("Input three cities:\n");
    for (i = 0; i < 3; i++) {
        printf("Name> ");
        scanf("%s", cities[i].name);
        printf("Country> ");
        scanf("%s", cities[i].country); 
        printf("Population> ");
        scanf("%d", &cities[i].population); 
    }

    printf("\nCity Information:\n");
    for (i = 0; i < 3; i++) {
        printf("City %d:\n", i + 1);
        printf("Name: %s\n", cities[i].name);
        printf("Country: %s\n", cities[i].country);
        printf("Population: %d\n", cities[i].population);
    }

    return 0;
}
