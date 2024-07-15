#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if (ac == 4)
    {
        int num1 = atoi(av[1]);
        int num2 = atoi(av[3]);
        int result;
        if (av[2][0] == '*')
            result = num1 * num2;
        else if (av[2][0] == '/')
            result = num1 / num2;
        else if (av[2][0] == '-')
            result = num1 - num2;
        else if (av[2][0] == '+')
            result = num1 + num2;
        printf("%d\n", result);
    }
    else
        write(1, "\n", 1);
}