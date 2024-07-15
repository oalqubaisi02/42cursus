unsigned char	reverse_bits(unsigned char octet)
{
    int bit = 8;
    unsigned char rev;
    while (bit--)
    {
        rev = (rev << 1) | (octet & 1);
        octet = octet >> 1;
    }
    return (rev);
}