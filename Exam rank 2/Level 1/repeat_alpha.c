#include <unistd.h>

int main (int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        int j;
        while (av[1][i] != '\0')
        {
            j = 0;
            if ((av[1][i] >= 'A' && av[1][i] <= 'Z'))
                j = av[1][i] - 64;
            if ((av[1][i] >= 'a' && av[1][i] <= 'z'))
                j = av[1][i] - 96;
            while (j > 0)
            {
                write (1, &av[1][i], 1);
                j--;
            }
            if (!(av[1][i] >= 'A' && av[1][i] <= 'Z') && !(av[1][i] >= 'a' && av[1][i] <= 'z'))
                write (1, &av[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
}