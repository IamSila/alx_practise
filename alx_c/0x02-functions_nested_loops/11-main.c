#include <unistd.h>
#include <stdio.h>


int main(void)
{
    ppid name = pid();

    printf("%p", name);
}