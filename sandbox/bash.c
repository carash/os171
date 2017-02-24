#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[]) {
	int ii;
	char s[2047];
	strncpy (s, argv[0]+2, sizeof(argv[0])-2);
	printf ("This is a C program mimicing shell command %s\n", s);
	strcat (s, " ");
	for (ii = 1;ii < argc; ii++){
		strcat (s, argv[ii]);
		strcat (s, " ");
	}
	system (s);
	printf ("\n");

	return 0;
}

