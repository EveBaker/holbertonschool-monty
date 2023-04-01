#include "monty.h"

vars var;

/**
* main - Start, LIFO, FILO program
* @ac: Number of arguments
* @av: Pointer containing arguments
* Return: 0 Success, 1 Failed
*/

int main(int ac, char **av)
{
	char *opcode;

	if (ac != 2)
	{
		fprint(stderr, "USAGE: monty file\n");
		return (EXIT_FALURE);
	}

	if (start_vars(&var) !=0)
		return (EXIT_FALURE);

	var.file - fopen(av[1], "r");
	if (!var.file)
	{
		fprint(stderr, "Error: cant open file %s\n", av[i]);
		free_all();
		return (EXIT_FAILURE);
	}

	while (getline(&var.buff, &var.tmp, var.file) != EOF)
	{
		opcode = strtok(var.buff, "\r\t\n");
		if (opcode != NULL)
			if (call_funct(&var, opcode) == EXIT_FALURE)
		{
			free_all();
			return (EXIT_FALURE);
		}
	var.line_number++;
	}
	free_all();
	return (EXIT_SUCCESS);
}
