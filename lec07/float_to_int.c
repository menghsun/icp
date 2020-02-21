#include <stdio.h>
int main()
{
	int x = 0x1ffffff;
	float y;
	y = x;
	printf("x = %d\n", x);
	printf("y = %f\n", y);

	return 0;
}
