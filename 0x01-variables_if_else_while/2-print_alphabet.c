#include <unistd.h>

int main(void)
{
    char letter;

    letter = 'a';
    while (letter <= 'z')
    {
        putchar(letter);
        letter++;
    }
    putchar('\n');
    return (0);
}
