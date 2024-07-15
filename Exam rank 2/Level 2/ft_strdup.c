#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i = 0;
    char *temp;
    while (src[i] != '\0')
        i++;
    i++;
    temp = malloc ((sizeof (char)) * i);
    if (!temp)
        return (NULL);
    i = 0;
    while (src[i] != '\0')
    {
        temp[i] = src[i];
        i++;
    }
    temp[i] = '\0';
    return (temp);
}