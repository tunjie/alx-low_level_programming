#include <stdio.h>
#include <unistd.h>
/**
  * main - A C program that prints a line to standard error
  * Return: 1 (Success)
  */
int main(void)
{
	char cont[83];

	fgets(cont, 83, stderr);
	puts("and that piece of art is useful\"- Dora Korpar, 2015-10-19\n");
	return (1);
}
