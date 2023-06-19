#include "monty.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

void pushfunc(stack_t **stack, unsigned int line_number)
{

}

void pallfunc(stack_t **stack, unsigned int line_number)
{

}

void pintfunc(stack_t **stack, unsigned int line_number)
{

}

void popfunc(stack_t **stack, unsigned int line_number)
{

}

void swapfunc(stack_t **stack, unsigned int line_number)
{

}

void addfunc(stack_t **stack, unsigned int line_number)
{

}

void nopfunc(stack_t **stack, unsigned int line_number)
{

}

int readline(int file)
{

}
void print_err_exit(int file, char *errmsg)
{
	close(file);
	free(topstack);
	dprintf(STDERR_FILENO, "%s", errmsg);
	exit(EXIT_FAILURE);

}


/**
* main - an interpreter for monty bytecode file
* @ac: number of arguments
* @ac: program arguments
*
* Return: 0 if successful
*/

int main(int ac, char **av)
	int file;
	unsigned int line_num = 0;
	char *opcode = NULL;
	int *operand = NULL;
	instruction_t inst[7] = {{"push", "pushfunc"}, {"pall", "pallfunc"},
				 {"pint", "pintfunc"}, {"pop", "popfunc"},
				 {"swap", "swapfunc"}, {"add", "addfunc"},
				 {"nop", "nopfunc"}}

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = open(*av[1], O_RDONLY);
	if (file == -1)
	{
		dprintf(STDIN_FILENO, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}
	
	while (line != -1 || line !=  EOF)
	{
		line = readline(file);
		line_num++;
		opcode = get_opcode(line);
		if (opcode == NULL)
		{
			close(file)
			exit(EXIT_FAILURE);
		}
		if (opcode_req_arg(opcode))
		{
			operand = get_operand(opcode);
			if (operand == NULL)
			{
				close(file);
				exit(EXIT_FAILURE);
			}
		}
		if (exec_instr(opcode, operand, line_num) == -1)
		{
			close(file);
			exit(EXIT_FAILURE);
		}

	}
	close(file);
	free_stk(topstack);
}















