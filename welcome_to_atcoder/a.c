// in : 1
//      2 3
//      test
// out: 6 test
#include <stdio.h>

int main(void){
	int a, b, c;
	char s[128];

	scanf("%d", &a);
	scanf("%d %d", &b, &c);
	scanf("%s", s);

	printf("%d %s\n", a+b+c, s);

	return 0;
}

