#include <stdio.h>
#include <string.h>

int main()
{
    char Municipality[50];
    char Mayor[50];
    int Population;

    printf("Welcome to Windhoek Municipality\n\n");
    printf("Municipal Financial Management System\n\n");

    printf("Enter Municipality Name: ");
    fgets(Municipality, sizeof(Municipality), stdin);
    Municipality[strcspn(Municipality, "\n")] = 0;

    printf("Enter Mayor: ");
    fgets(Mayor, sizeof(Mayor), stdin);
    Mayor[strcspn(Mayor, "\n")] = 0;

    printf("Enter Population: ");
    scanf("%d", &Population);

    printf("\n---------------------------------\n");
    printf("Municipality : %s\n", Municipality);
    printf("Mayor        : %s\n", Mayor);
    printf("Population   : %d\n", Population);

    return 0;
}