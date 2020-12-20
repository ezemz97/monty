#include "monty.h"
int main(int ac, char *av[])
{
	FILE *fptr;
	char *line = NULL, opc = NULL;
	int opv = 0;
	size_t linebuff = 0, lineret = 0;
	instruction_t codes[] = {{"push", add_dnodeint_end}};

	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	fptr = fopen(argv[1],"r");
	if(fptr == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}
	while (lineret != EOF)
	{
		lineret = getline(&line, &linebuff, fptr);
		opc = strtok(line, ' ');
		opv = atoi(strtok(NULL, ' '))
		if (strcmp(codes[0].opcode, opc) == 0);
		{
			printf("yaay %s\n", opc);
		}
	}
	return (0);
}