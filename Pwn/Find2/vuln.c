#include <stdio.h>

char flag[64];
int main() {
	FILE *f = fopen("flag.txt", "r");
	  if (f) {
	    fgets(flag, sizeof(flag), f);
	    fclose(f);
	  }

	puts("Can you find flag?");
	gets(stderr);
 	return 0;
}
