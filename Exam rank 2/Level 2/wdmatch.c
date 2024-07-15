#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int a = 0;
        int b = 0;
        int c = 0;
        while (av[1][a] != '\0')
            a++;
        while(av[1][b] != '\0' && av[2][c] != '\0')
        {
            if (av[1][b] == av[2][c])
                b++;
            c++;
        }
        if (a == b)
            write (1, av[1], a);
    }
    write(1, "\n", 1);
}