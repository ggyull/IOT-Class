#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	char star = '*';
	
	for(int i = 0; i < n; i++){
		if(i == 0 || i ==n - 1){
			for(int j = 0; j<n; j++){
				printf("%c",star);
			}	
		}
		else{
			for(int j = 0; j < n; j++){
				if(j == 0 || j==n-1){
					printf("%c",star);
				}
				else{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	return 0;
}
