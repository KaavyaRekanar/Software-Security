#include <stdio.h>
#include <stdlib.h>

int
main( int argc, char **argv ) {
	char * stuff = 0;
	int len = 0;
	
	vulnerable();
	return 0;
}

int
vulnerable( void ) {
	char buf[100];

	printf("Please enter your hacker name: ");
	fflush(stdout);
	gets(buf);
	printf("\"%s\"\n can hack this?" , buf );
}

void
notcalled( void ) {
	char *secret = "Iouf jmmb, cbsb sftufo lwbs!";
	int i;

	printf("The Secret string is: ");
	for( i = 0 ; secret[i] ; i++ )
		if( secret[i] >= 'a' && secret[i] <= 'z' )
			printf("%c" , secret[i] -1 );
		else
			printf("%c" , secret[i] );
	printf("\n");
}

