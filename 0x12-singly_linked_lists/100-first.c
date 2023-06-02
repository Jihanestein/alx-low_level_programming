#include <stdio.h>

void premier(void) __attribute__((constructor));

/**
  * premier - fucntion print a sentence befor ethe main
  * fucntion is executed
  */

void premier(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
