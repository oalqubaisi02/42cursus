#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        char letter;
        while (av[1][i] != '\0')
        {
            if ((av[1][i] >= 'A' && av[1][i] <= 'Y') || (av[1][i] >= 'a' && av[1][i] <= 'y'))
                letter = av[1][i] + 1;
            else if (av[1][i] == 'Z' || av[1][i] == 'z')
                letter = av[1][i] - 25;
            else 
                letter = av[1][i];
            write (1, &letter, 1);
            i++;
        }
    }
    write(1, "\n", 1);
}