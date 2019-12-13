#include <stdio.h>

int main(void)
{
	// print "\"
	char a = '\\';
	printf("\%c\n", a);  // %c -> \   \\ -> \

	// print "%%"
	char b = '%';
	printf("%%%c\n", b);   // %% -> %   %c -> %
	return 0;
}
