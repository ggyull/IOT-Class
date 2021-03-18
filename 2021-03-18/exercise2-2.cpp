#include <stdio.h>
#include <stdlib.h>

int binary(int a){
	char ans[4]={};
	ans[0] = a&8;
	ans[1] = a&4;
	ans[2] = a&2;
	ans[3] = a&1;
	
	return (ans[0]*1000+ans[1]*100+ans[2]*10+ans[3]);
}

int main(){
	int num;
	scanf("%d",&num);
	int get = binary(num);
	char ans[4];
	ans[0] = num/1000;
	ans[1] = num/100;
	ans[2] = num/10;
	ans[3] = num/1;
	for(int i =0; i<4; i++){
		if(ans[i] == 1)
			ans[i] = 'O';
		else
			ans[i] = 'X';
	}
	printf("%s", ans);
}
