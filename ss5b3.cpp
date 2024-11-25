#include<stdio.h>
int main(){
	int i;
	int sum = 0;
	scanf("%d",&i);
	while(i!=0){
		sum+=i;
		if(i>0){
			i--;
		}else{
			i++;
		}
	}
	printf("%d",sum);

	return 0;
}
