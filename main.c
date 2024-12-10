#include <stdio.h>
#include <stdbool.h>
#include "headerexample/headerexample.h"

float damage_health(int health, float damage) {
    return (float) health - damage * (float)health;
}

int main(void) {
    printf("Hello, World!\n");
    int max_x = 0;
    char dir = 'r';
    float health_damage_percentage = 0.2;
    char *banner_text = "Banner text";
    printf("Max x = %d\n", max_x);
    printf("dir = %c\n", dir);
    printf("health_damage_percentage = %f\n", health_damage_percentage);
    printf("banner_text = %s\n", banner_text);

    const int max_health = 100;
    printf("max_health = %d\n", max_health);
    printf("health after damage: %f\n", damage_health(max_health, health_damage_percentage));
    printf("get_string value from header function: %s\n", get_string(1));

    printf("sizes of data types are not same on every cpu platform\n");
    printf("size of int: %zu\n", sizeof(int));
    printf("size of long long: %zu\n", sizeof(long long));
    printf("size of unsigned long: %zu\n", sizeof(unsigned long));
    printf("size of float: %zu\n", sizeof(float));
    printf("size of double: %zu\n", sizeof(double));
    printf("size of long double: %zu\n", sizeof(long double));
    printf("size of char: %zu\n", sizeof(char));
    printf("size of bool: %zu\n", sizeof(bool));
    printf("size of size_t: %zu\n", sizeof(size_t));

    printf("IT is possible to create a \"block of code\" or \"scope\" in C using do { } while(0)");
    do {
        int local_var = 6;
        printf("local_var in do while = %d\n", local_var);
    } while (0);
    return 0;
}
