#include <stdio.h>

int main()
{
    int number;
    int even = 0;
    int i;

    for (i = 1; i <= 10; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (number % 2 == 0)
        {
            even++;
        }
    }

    printf("Number of even numbers = %d\n", even);

    return 0;
}
