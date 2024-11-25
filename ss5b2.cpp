#include<stdio.h>
int main(){
	int sum=30;
	printf("moi ban nhap so");
	scanf("%d", & sum);
	if(sum < 30){
		printf("lon hon nua");
	}else if(sum > 30){
		printf("be hon nua");
	}else{
		printf("dung roi");
	}
	
		return 0;
}
