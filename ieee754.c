#include <stdio.h>

int main()
{
	char x[4];
	float *p = (float *) x;
	
	// positive zero
	x[3] = 0x0;
	x[2] = 0x0;
	x[1] = 0x0;
	x[0] = 0x0;
	printf("%f\n", *p);

	// negative zero
	x[3] = 0x80;
	x[2] = 0x0;
	x[1] = 0x0;
	x[0] = 0x00;
	printf("%f\n", *p);

	// positive infinity
	x[3] = 0x7f;
	x[2] = 0x80;
	x[1] = 0x0;
	x[0] = 0x0;
	printf("%f\n", *p);

	// negative infinity
	x[3] = 0xff;
	x[2] = 0x80;
	x[1] = 0x0;
	x[0] = 0x0;
	printf("%f\n", *p);

	// NaN
	x[3] = 0xff;
	x[2] = 0x81;
	x[1] = 0x0;
	x[0] = 0x0;
	printf("%f\n", *p);


	// number 1 
	x[3] = 0x3f;
	x[2] = 0x80;
	x[1] = 0x0;
	x[0] = 0x0;
	printf("%f\n", *p);

	// number 2
	x[3] = 0x40;
	x[2] = 0x00;
	x[1] = 0x0;
	x[0] = 0x0;
	printf("%f\n", *p);

	// number 0.5
	x[3] = 0x3f;
	x[2] = 0x00;
	x[1] = 0x0;
	x[0] = 0x0;
	printf("%f\n", *p);

	// number 1.5
	x[3] = 0x3f;
	x[2] = 0xc0;
	x[1] = 0x0;
	x[0] = 0x0;
	printf("%f\n", *p);

	return 0;
}
