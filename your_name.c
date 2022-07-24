#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("\n\n");
    // --------------------------------------------- //

    printf("Hello!, tell me your name please: ");
    char name[30];
    scanf("%s", &name);

    printf("tell me your age please: ");
    int age;
    scanf("%d", &age);

    printf("\n");
    printf("Hello %s you are %d old, Nice to meet you", name, age);

    // --------------------------------------------- //
    printf("\n\n");
    return 0;
}
