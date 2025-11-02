#include <stdio.h>
#include <stdlib.h>

int main(){
	puts("What is your name?");
	gets(0x404008);
	puts("Loading...");
	sleep(0xffffffff);
	puts("Done");
	system("/bin/sh");
}
