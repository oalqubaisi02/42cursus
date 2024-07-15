#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        while (av[1][i] != '\0')
        {
            char letter;
            if ((av[1][i] >= 'A' && av[1][i] <= 'M') || (av[1][i] >= 'a' && av[1][i] <= 'm'))
                letter = av[1][i] + 13;
            else if ((av[1][i] >= 'N' && av[1][i] <= 'Z') || (av[1][i] >= 'n' && av[1][i] <= 'z'))
                letter = av[1][i] - 13;
            else
                letter = av[1][i];
            write(1, &letter, 1);
            i++;
        }
    }
    write (1, "\n", 1);
}