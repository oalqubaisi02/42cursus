#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int i = 0;
        int checker[256] = {0};
        while (av[1][i] != '\0')
            checker[(int) av[1][i++]] = 1;
        i = 0;
        while (av[2][i] != '\0')
            checker[(int) av[2][i++]] = 1;
        i = 0;
        while (av[1][i] != '\0')
        {
            if (checker[(int) av[1][i]] == 1)
            {
                write (1, &av[1][i], 1);
                checker[(int) av[1][i]] = 2;
            }
            i++;
        }
        i = 0;
        while (av[2][i] != '\0')
        {
            if (checker[(int) av[2][i]] == 1)
            {
                write (1, &av[2][i], 1);
                checker[(int) av[2][i]] = 2;
            }
            i++;
        }
    }
    write (1, "\n", 1);
}