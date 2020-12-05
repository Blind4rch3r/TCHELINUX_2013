#include <stdio.h>
#define SIZE 128

int main (int argc, char *argv[])
{
	char nome[SIZE];
	int senha = 0;

	strcpy(nome, argv[1]);

	if (senha == 0xdeadbeef)
	{
		printf("%s\n", "H4ck3d!");
		execve("/bin/sh", NULL, NULL);
	}
}