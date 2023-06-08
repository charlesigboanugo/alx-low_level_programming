#include <stdio.h>
#include <stdlib.h>

/**
* main - output the key for crackme5
* @ac: number of arguments
* @av: arguments
*
* Return: 0 if success else 1
*/

int main(int ac, char **av)
{
	long num[] = {0x3877445248432d41, 0x42394530534e6c37,
			0x4d6e706762695432, 0x74767a5835737956,
			0x2b554c59634a474f, 0x71786636576a6d34,
			0x723161513346655a, 0x6b756f494b646850};
	int passwd[6] = {0, 0, 1, 0, 0, 0}, x;
	char *str = (char *) num;

	if (ac != 2)
	{
		dprintf(2, "usage: program <name>\n");
		exit(1);
	}
	for (x = 0; av[1][x] != 0; x++)
	{
		passwd[1] += av[1][x];
		passwd[2] *= av[1][x];
		if (av[1][x] > passwd[3])
			passwd[3] = av[1][x];
		passwd[4] += av[1][x] * av[1][x];
	}
	passwd[0] = str[((x ^ 0x3b) & 0x3f)];
	passwd[1] = str[((passwd[1] ^ 0x4f) & 0x3f)];
	passwd[2] = str[((passwd[2] ^ 0x55) & 0x3f)];
	srand(passwd[3] ^ 0xe);
	passwd[3] = str[(rand() & 0x3f)];
	passwd[4] = str[((passwd[4] ^ 0xef) & 0x3f)];
	for (x = 0; *av[1] > x; x++)
		passwd[5] = rand();
	passwd[5] = str[((passwd[5] ^ 0xe5) & 0x3f)];
	for (x = 0; x < 6; x++)
		printf("%c", passwd[x]);

	return (0);
}
