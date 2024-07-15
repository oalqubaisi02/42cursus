#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
    int result = 1;
    while (result <= n)
    {
        result *= 2;
        if (result == n)
            return (1);
    }
    return (0);
}

int main()
{
    printf("%d", is_power_of_2(0));
}