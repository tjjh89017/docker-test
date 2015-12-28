#include <stdio.h>
#include <stdlib.h>

int never_use(){

	return system("cat flag");
}

int main(){

	char s[10];
	gets(s);
	puts(s);

	return 0;
}
