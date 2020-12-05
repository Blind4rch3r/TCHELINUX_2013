#include <stdio.h>
#define SIZE 128

int main (int argc, char *argv[])
{
	char nome[SIZE];

	strcpy(nome, argv[1]);
	printf("%s", nome);
}