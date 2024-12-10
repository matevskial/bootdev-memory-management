#include <stdio.h>

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
    return 0;
}
