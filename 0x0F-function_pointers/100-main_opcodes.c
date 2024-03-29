#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of itself
 * @argc: the numbe of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int bytes, index;
int (*adress)(int, char **) = main;
unsigned char opcodes;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
exit(2);
}
for (index = 0; index < bytes; index++)
{
opcodes = *(unsigned char *)adress;
printf("%.2x", opcodes);

if (index == bytes - 1)
continue;
printf(" ");
adress++;
}
printf("\n");
return (0);
}
