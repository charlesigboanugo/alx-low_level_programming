#include <stdio.h>
#include <stdlib.h>

/**
* check_num - checks the validity of a number extracted from a string
* @str: a pointer to a string
* 
* return: 0 if its a valid number otherwise 1
*/

int check_num(char *str)
{
	for (; *str != 0; str++)
	{
		if (*str < '0' || *str > '9')
			return (1);
	}		
	return (0);
}

/**
* str_len - calculates the length of  a string
* @str: a pointer to a string
* 
* return: returns the length of string
*/

int str_len(char *str)
{
	int len = 0;

	for (; *str != 0; str++)
	       len++;	

	return(len);
}

/**
* _realloc - reallocates the size of a memory
* @:mem: a pointer to a memory
* @nsize: the new size
*
* returm: a pointer to the reallocated memory
*/

char *_realloc(char *mem, int nsize)
{
	char *ptr, *wtr, *str = mem;

	ptr = malloc(nsize);
	if (!ptr)
	{
		printf("Error, unable to allocate space in memory\n");
		exit(98);
	}
	wtr = ptr;
	wtr++;
	for (; *str != 0; str++, wtr++)
		*wtr = *str;

	free(mem);
	return (ptr);
}


/**
* main - prints the product of two string numbers
* @argc: contains the number of integers provided as argument to the program
* @argv: an array of arguments to the program
*
* return: always 0; 
*/

int main(int argc, char *argv[])
{
	int i, n, len1, len2, size, carry, rem;
	char *mul, *num1, *num2, *ope1, *hold, *ope2, *ptr, *wtr;

	if (argc != 3 || check_num(argv[1]) || check_num(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	len1 = str_len(argv[1]);
	len2 = str_len(argv[2]);
	size = len1 + len2;
	mul = malloc(sizeof(*mul) * size);

	if (mul == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	
	if (len1 > len2)
	{
		num1 = argv[1];
		ope1 = num1 + len1 - 1;
		hold = ope1;
		num2 = argv[2];
		ope2 = num2 + len2 - 1;
	}
	else
	{
		num1 = argv[2];
		ope1 = num1 + len2 - 1;
		hold = ope1;
		num2 = argv[1];
		ope2 = num2 + len1 - 1;
	}

	ptr = mul;
	for (i = 0; i < size - 1; ptr++, i++)
		*ptr = '0';
			
	ptr--;
	wtr = ptr;
	for (; ope2 >= num2; ope2--, wtr--)
	{
		ope1 = hold;
		ptr = wtr;
		carry = 0;
		for (; ope1 >= num1; ope1--, ptr--)
		{
			n = carry;
			rem = (*ope1 - '0') * (*ope2 - '0');
			carry = ((*ptr - '0') + rem + n) / 10;
			*ptr = '0' + ((*ptr - '0') + rem + n) % 10;
			if (ope1 == num1 && ope2 > num2 && carry > 0)
				*--ptr = '0' + carry;
		}
	}
	
	if (carry > 0)
	{
		mul = _realloc(mul, size + 1);
		*mul = '0' + carry;
	}	

	printf("%s\n", mul);
	free(mul);

	return (0);
}
