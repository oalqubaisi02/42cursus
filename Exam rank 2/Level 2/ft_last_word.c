#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        while (av[1][i] != '\0')
            i++;
        while (av[1][i] == 9 || av[1][i] == 32)
            i--;
        while (av[1][i] == 9 || av[1][i] == 32)
            i--;
    }
}