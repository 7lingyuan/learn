#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 这是一段注释
int main()
{
	srand(time(NULL));
	printf("hello world\n");
	for (int i = 0; i < 10; i++)
	{
		int random = rand();
		printf("[%d] random date: %d\n", i, random);
	}
	return 0;
}