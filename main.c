#include <stdio.h>
#include <stdlib.h>

void p(int i, char *s);

int main(int argc, char *argv[])
{
	int i = 0;
	for(i=0;i<5;i++)
	{
		printf("%d\n",i);
	}
	puts("**********************");
	puts("git...");
	puts("**********************");

	p(5, "git");

	return 0;
}
