#include <strings.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    size_t j;
    int check;

    while (s[i] != '\0')
    {
        check = 0;
        j = 0;
        while (accept[j] != '\0')
        {
            if (s[i] == accept[j])
                check = 1;
            j++;
        }
        if (check == 0)
            return (i);
        i++;
    }
    return(i);
}
