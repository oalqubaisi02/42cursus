#include <unistd.h>

void print(char num)
{
    write(1, &num, 1);
}

void putnum(int num)
{
    if (num >= 10)
		putnum(num / 10);
	print(num % 10 + '0');
}

int main()
{
    int num = 1;
    while (num <= 100)
    {
        if (num % 3 == 0 && num % 5 == 0)
            write(1, "fizz buzz", 10);
        else if (num % 3 == 0)
            write(1, "fizz", 5);
        else if (num % 5 == 0)
            write(1, "buzz", 5);
        else
            putnum(num);
        write(1, "\n", 1);
        num++;
    }
}