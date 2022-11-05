#include <stdio.h>

/**
 * main - program entry point
 * @argc: argument count
 * @argv: argument vector
 * return - always 0
 */

int main (int argc, char *argv[])
{
if (argc != 2)
{
printf("Too many or too few arguments\n");
}
else
{
printf("%s\n", argv[1]);
}

return (0);
}   
