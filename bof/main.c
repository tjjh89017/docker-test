#include <stdio.h>
#include <stdlib.h>

int never_use(){

	return system("cat flaf");
}

int main(){

	char s[10];
	scanf("%s", s);
	puts(s);

	return 0;
}
