#include <stdio.h>

int main() {
    char street[100];
    char city[50];
    char state[50];
    char pin[20];

    printf("Enter Street Address:\n");
    fgets(street, sizeof(street), stdin);

    printf("Enter City:\n");
    fgets(city, sizeof(city), stdin);

    printf("Enter State:\n");
    fgets(state, sizeof(state), stdin);

    printf("Enter PIN Code:\n");
    fgets(pin, sizeof(pin), stdin);

    printf("\nAddress:\n");
    printf("%s", street);
    printf("%s", city);
    printf("%s", state);
    printf("%s", pin);

    return 0;
}
