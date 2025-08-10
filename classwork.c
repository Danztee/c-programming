#include <stdio.h>
#include <stdbool.h>

int main()
{

    char name[] = "Daniel";
    int age = 22;
    float height = 1.854;
    char letter = 'A';

    bool online = true;

    printf("Name: %s\n", name);
    printf("Age: %3d years\n", age);
    printf("Height: %.2f m\n", height);
    printf("Favorite letter: %c\n", letter);

    if (online)
    {
        printf("Status: Online");
    }
    else
    {
        printf("Status: Offline");
    }

    return 0;
}