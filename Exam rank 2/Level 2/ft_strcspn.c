#include <strings.h>

size_t ft_strcspn(const char *s1, const char *reject)
{
    size_t i = 0;
    size_t j;
    while (s1[i] != '\0')
    {
        j = 0;
        while (reject[j] != '\0')
        {
            if (s1[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}