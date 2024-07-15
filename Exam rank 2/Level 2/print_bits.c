#include <unistd.h>

void print_bits(unsigned char octet)
{
    int bit = 8;
    unsigned char binary;
    while (bit--)
    {
        binary = (octet >> bit & 1) + '0';
        write (1, &binary, 1);
    }
}

int main()
{
    print_bits('f');
}