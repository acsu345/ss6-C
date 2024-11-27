#include <stdio.h>
#include <math.h>

int main(){
	int a;
	int count=0;
	int num=0;
	int prime=2;
		printf("moi ban nhap vao so nguyen to can in ra: ");
		scanf("%d",&a);
	while(num<a){
		count=0;
		for(int i = 1; i <= prime; i++){
	
			if(prime%i==0){
				count++;
			}
	}
		if(count==2){
			printf("\n so nguyen to %d",prime);
			num++;
		}
		prime++;
    }
return 0;	
}
