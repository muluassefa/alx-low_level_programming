#include <stdio.h>

char *_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    // find the end of dest
    while (dest[i] != '\0')
    {
        i++;
    }

    // append src to dest
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    // add null terminating character
    dest[i] = '\0';

    return dest;
}
