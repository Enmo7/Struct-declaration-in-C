#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct info
    {
        char name[20];

        int age;

        int clas;

    };

    struct info m = {"Tiger", 23, 2023};

    printf("%s \n", m.name);

    printf("%d \n", m.age);

    printf("%d \n", m.clas);

    return 0;
}
