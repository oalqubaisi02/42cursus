#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        while(av[1][i] != '\0')
        {
            if (av[1][i] == 'A' || av[1][i] == 'a')
                av[1][i] += 25;
            else if (av[1][i] == 'B' || av[1][i] == 'b')
                av[1][i] += 23;
            else if (av[1][i] == 'C' || av[1][i] == 'c')
                av[1][i] += 21;
            else if (av[1][i] == 'D' || av[1][i] == 'd')
                av[1][i] += 19;
            else if (av[1][i] == 'E' || av[1][i] == 'e')
                av[1][i] += 17;
            else if (av[1][i] == 'F' || av[1][i] == 'f')
                av[1][i] += 15;
            else if (av[1][i] == 'G' || av[1][i] == 'g')
                av[1][i] += 13;
            else if (av[1][i] == 'H' || av[1][i] == 'h')
                av[1][i] += 11;
            else if (av[1][i] == 'I' || av[1][i] == 'i')
                av[1][i] += 9;
            else if (av[1][i] == 'J' || av[1][i] == 'j')
                av[1][i] += 7;
            else if (av[1][i] == 'K' || av[1][i] == 'k')
                av[1][i] += 5;
            else if (av[1][i] == 'L' || av[1][i] == 'l')
                av[1][i] += 3;
            else if (av[1][i] == 'M' || av[1][i] == 'm')
                av[1][i] += 1;
            else if (av[1][i] == 'N' || av[1][i] == 'n')
                av[1][i] -= 1;
            else if (av[1][i] == 'O' || av[1][i] == 'o')
                av[1][i] -= 3;
            else if (av[1][i] == 'P' || av[1][i] == 'p')
                av[1][i] -= 5;
            else if (av[1][i] == 'Q' || av[1][i] == 'q')
                av[1][i] -= 7;
            else if (av[1][i] == 'R' || av[1][i] == 'r')
                av[1][i] -= 9;
            else if (av[1][i] == 'S' || av[1][i] == 's')
                av[1][i] -= 11;
            else if (av[1][i] == 'T' || av[1][i] == 't')
                av[1][i] -= 13;
            else if (av[1][i] == 'U' || av[1][i] == 'u')
                av[1][i] -= 15;
            else if (av[1][i] == 'V' || av[1][i] == 'v')
                av[1][i] -= 17;
            else if (av[1][i] == 'W' || av[1][i] == 'w')
                av[1][i] -= 19;
            else if (av[1][i] == 'X' || av[1][i] == 'x')
                av[1][i] -= 21;
            else if (av[1][i] == 'Y' || av[1][i] == 'y')
                av[1][i] -= 23;
            else if (av[1][i] == 'Z' || av[1][i] == 'z')
                av[1][i] -= 25;
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}