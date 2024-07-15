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
        while (av[1][i] != 9 && av[1][i] != 32 && i >= 0)
            i--;
        i++;
        while (av[1][i] != 9 && av[1][i] != 32 && av[1][i] != '\0')
            write (1, &av[1][i++], 1);
    }
    write (1, "\n", 1);
}