#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {

    char name[50];
    int age;
    char city[30];
    int year;

    printf("What is your name ? ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;
    printf("> Nice to meet you, %s!\n", name);

    printf("How old are you ? ");
    scanf("%d", &age);
    getchar();
    year = 2025 - age;
    printf("> You are %d years old, and you were born in %d.\n", age, year);

    printf("What city do you live in ? ");
    fgets(city, sizeof(city), stdin);
    city[strcspn(city, "\n")] = 0;
    printf("> You live in %s.\n", city);

    return 0;
}