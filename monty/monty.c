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

int read_trim_line(int file, char **line, unsigned int line_num)
{
	char *ptr, byte;
	ssize_t bytes_read;
	unsigned int index = 0;

	ptr = malloc(sizeof(*ptr) * 99);
	if (ptr == NULL)
	{
		print_err();
		return (-1)
	}
	*line = ptr;
	while (byte != '\n' && index < 99)
	{
		bytes_read = read(file, &byte, 1);
		if (bytes_read == -1)
		{
			print_err();
			return (-1);
		}
		if (bytes_read == 0)
			break;
		if (byte != ' ' && byte != '\n')
		{
			ptr[index] = byte;
			index++;
		}	

	}
	if (index == 0 && bytes_read == 0)
		return (EOF);
	if (index == 0)
		return (0)
	return (index)
}

char *get_opcode(char *line_buf, instruction_t *inst, unsigned int line_num)
{
	unsigned int i;

	for(i = 0; i < 7; i++)
	{
		if (strstr(line, inst[i]->opcode) == line)
			return (inst[i]->opcode);
	}
	print_err("", line_num);
	return (NULL);
}
int *get_operand(char *line_buf, char *opcode, unsigned int line_num)
{
	int operand, sign = 1;
	char *ptr;

	ptr = line_buf + strlen(opcode);
	for (; ptr != '\0'; ptr++)
	{
		if (*ptr = '-')
			sign *= -1;
		if (isdigit(*ptr))
		{
			operand =  (sign * atoi(*ptr));
			return (&operand);
		}
	}
	print_err("", line_num);
	return (NULL);
}
int opcode_req_arg(opcode)
{
	if (strcmp(opcode, "push") == 0)
		return 1;
	return (0);
}
void clean_err_exit(int file, char *line)
{
	free_buff(line)
	close(file);
	free(topstack);
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
	instruction_t inst[7] = {{"push", "pushfunc"}, {"pall", "pallfunc"},
				 {"pint", "pintfunc"}, {"pop", "popfunc"},
				 {"swap", "swapfunc"}, {"add", "addfunc"},
				 {"nop", "nopfunc"}};
	int file, *operand = NULL, byte_read;
	unsigned int line_num = 0;
	char *opcode = NULL, *line == NULL;
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
	
	while (1)
	{
		free_buff(line);
		byte_read = read_trim_line(file, &line, line_num);
		if (byte_read == -1)
			clear_err_exit(file, line);
		if (byte_read == EOF)
			break;
		if (byte_read == 0)
		{
			line_num++;
			continue;
		}
		opcode = get_opcode(line, inst, line_num);
		if (opcode == NULL)
			clear_err_exit(file, line);
		if (opcode_req_arg(opcode))
		{
			operand = get_operand(line, opcode, line_num);
			if (operand == NULL)
				clear_err_exit(file, line);
		}
		if (exec_instr(opcode, operand, line_num) == -1)
			clear_err_exit(file, line);
		line_num++;

	}
	free_buff(line);
	close(file);
	free_stk(topstack);
}















