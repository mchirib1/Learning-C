// Learning escape sequences and conversion characters
#include <stdio.h>

int main(){

	printf("Column A\tColumn B\tColumn C\n");
	printf("My computer\'s Beep sounds like this: \a!\n");
	printf("\"Letz\bs fix that typo then show the backslash \n");
	printf("character \\\" she said\n");\
	printf("%d roses cost %0.2f per %d\n", 24, 19.95, 12);
	printf("%s is %d and %.1f years old. \n","Sam", 21, 0.25 );
	
	return 0;
}