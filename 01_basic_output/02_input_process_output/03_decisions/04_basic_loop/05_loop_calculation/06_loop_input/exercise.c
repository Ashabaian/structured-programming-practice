#include <stdio.h>

int main()
{
    int mark;
    int i;

    for (i = 1; i <= 5; i++)
    {
        printf("Enter mark %d: ", i);
        scanf("%d", &mark);
    }

    printf("All 5 marks have been entered.\n");

    return 0;
}
