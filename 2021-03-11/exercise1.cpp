#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	
	if(num >=90 && num <=100)
		printf("A");
	else if(num >= 70 && num <90)
		printf("B");
	else if(num >= 40 && num <70)
		printf("C");
	else
		printf("D");
	return 0;
}
