#include <stdio.h>

int main()
{
    int mark;

    printf("Enter your mark: ");
    scanf("%d", &mark);

    if (mark >= 50)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail\n");
    }

    return 0;
}
