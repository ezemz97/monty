#include "monty.h"
int main(int ac, char *av[])
{
	FILE *fptr;
	char *line = NULL, *opcod = NULL, *token = NULL;
	int opval = 0;
	size_t linebuff = 0, lineret = 0;
	instruction_t codes[] = {{"push", add_dnodeint_end}, {NULL, NULL}};

	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	fptr = fopen(av[1],"r");
	if(fptr == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av[1]);
		return (EXIT_FAILURE);
	}
	while (lineret != EOF)
	{
		lineret = getline(&line, &linebuff, fptr);
		token = strtok(line, " ");
		if (strcmp(codes[0].opcode, token) == 0);
		{
			printf("yaay %s\n", token);
		}
	}
	return (0);
}