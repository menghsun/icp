#include <stdio.h>

int main(void)
{
	for(int x = 0; x < 1000000; x++);
		printf("aaa\aaaa");
	for(int x = 0; x < 1000000; x++);
		printf("bbb\bbbb");
	for(int x = 0; x < 1000000; x++);
		printf("fff\ffff");
	for(int x = 0; x < 1000000; x++);
		printf("nnn\nnnn");
	for(int x = 0; x < 1000000; x++);
		printf("rrr\rrrr");
	for(int x = 0; x < 1000000; x++);
		printf("ttt\tttt");
	return 0;
}
