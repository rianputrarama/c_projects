#include <stdio.h>
#include <stdbool.h>


int main() {

    int age = 25;
    int year = 2025;
    int quantity = 1;

    float gpa = 3.3;
    float price = 5.99;

    double pi = 3.1415926535;

    char grade = 'A';
    char food[] = "Donuts";

    bool isOnline = true;

    if (!isOnline) {
        printf("You are offline.\n");
    } else {
        printf("You are online.\n");

    }

    printf("You are %d years old.\n", age);
    printf("The year is %d.\n", year);
    printf("You have ordered %d x item\n", quantity);

    printf("your gpa is %.1f\n", gpa);
    printf("The price is $%.2f\n", price);
    
    printf("pi is approximately %.10lf\n", pi);

    printf("Your grande is %c\n", grade);
    printf("My favorite food is %s\n", food);
    
    return 0;
}