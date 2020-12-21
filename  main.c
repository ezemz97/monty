#include "monty.h"
int main(int ac, char *av[])
{
	FILE *fptr;
	char *line = NULL, *opcod = NULL, *token = NULL, *val = NULL;
	int x = 0, linecount = 0, flag = 0, lineret = 0;
	size_t linebuff = 0;
	char delimit[]=" \n";
	stack_t *stack = NULL;

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
	lineret = getline(&line, &linebuff, fptr);
	while (lineret != EOF)
	{
		linecount++;
		token = strtok(line, delimit);
		if (strcmp(codes[0].opcode, token) == 0);
		{
			printf("%s", "dalegas");
			flag = 1;
			if (token[strlen(token) +1] != '\0')
			{
				token = strtok(NULL, delimit);
				val = malloc(sizeof(strlen(token) + 1));
				strcpy(val, token);
				add_dnodeint(&stack, linecount);
				free(val);
			}	
		}
		lineret = getline(&line, &linebuff, fptr);
	}	
	/*if (flag == 0)
	{
		printf("L%d: unknown instruction %s", linecount, token);
	}*/
	
	return (0);
}