#include <stdio.h>
#include "alibrary.h"

int main()
{
	printf("Hello, World!\nI am a causeway executable built with OpenWatcom in dos mode from a CMAKE project!\n");
	printf("The answer to the question about life universe and everything is %d\n", answer_to_the_question());
	getchar();
	return 0;
}