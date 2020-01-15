#include <stdio.h>
#include <limits.h>

int main()
{
	/* number of bits for smallest object that is not a bit-field (byte) */
	printf("CHAR_BIT: %d\n", CHAR_BIT);

	/* maximum number of bytes in a multibyte character, for any supported locale */
	printf("MB_LEN_MAX: %d\n", MB_LEN_MAX);

	/* *********************************************** */
	printf("\nfor characters:\n");

	/* minimum value of signed char */
	printf("SCHAR_MIN: %d\n", SCHAR_MIN);

	/* maximum value of signed char */
	printf("SCHAR_MAX: %d\n", SCHAR_MAX);

	/* maximum value of unsigned char */
	printf("UCHAR_MAX: %d\n", UCHAR_MAX);

	/* minimum value of char */
	printf("CHAR_MIN: %d\n", CHAR_MIN);

	/* maximum value of char */
	printf("CHAR_MAX: %d\n", CHAR_MAX);

	/* *********************************************** */
	printf("\nfor integers:\n");

	/* minimum value of short int */
	printf("SHRT_MIN: %d\n", SHRT_MIN);

	/* maximum value of short int */
	printf("SHRT_MAX: %d\n", SHRT_MAX);

	/* maximum value of unsigned short int */
	printf("USHRT_MAX: %d\n", USHRT_MAX);

	/* minimum value of int */
	printf("INT_MIN: %d\n", INT_MIN);

	/* maximum value of int */
	printf("INT_MAX: %d\n", INT_MAX);

	/* maximum value of unsigned int */
	printf("UINT_MAX: %u\n", UINT_MAX);

	/* minimum value of long int */
	printf("LONG_MIN: %ld\n", LONG_MIN);

	/* maximum value of long int */
	printf("LONG_MAX: %ld\n", LONG_MAX);

	/* maximum value of unsigned long int */
	printf("ULONG_MAX: %lu\n", ULONG_MAX);

	/* minimum value of long long int */
	printf("LLONG_MIN: %lld\n", LLONG_MIN);

	/* maximum value of long long int */
	printf("LLONG_MAX: %lld\n", LLONG_MAX);

	/* maximum value of unsigned long long int */
	printf("ULLONG_MAX: %llu\n", ULLONG_MAX);


	return 0;
}
