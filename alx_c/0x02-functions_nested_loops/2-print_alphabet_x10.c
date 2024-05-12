#include "main.h"

void print_alphabet_x10(void)
{
    int counter;
    for (counter = 0;counter <= 10; counter++)
    {
        char letter = 'a';

        for (;letter <= 'z'; letter++)
        {
            _putchar(letter);
        }
        _putchar('\n');
    }

}