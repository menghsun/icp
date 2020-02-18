#include <stdio.h>

int main()
{
	int i, command;
	printf("Enter an integer: ");
	scanf("%d", &i);

	printf("Enter a command: ");
	command = getchar();

	printf("i is %d\n", i);
	printf("command is %x\n", command);

	return 0;
}

