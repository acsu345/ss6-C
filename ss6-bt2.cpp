#include <stdio.h>

int main(){
	int n1, n2, n3, n4, n5, count1, count2;
	printf("Nhap so nguyen thu 1: \n");
	scanf("%d", &n1);
	printf("Nhap so nguyen thu 2: \n");
	scanf("%d", &n2); 	
	printf("Nhap so nguyen thu 3: \n");
	scanf("%d", &n3); 	
	printf("Nhap so nguyen thu 4: \n");
	scanf("%d", &n4);
	printf("Nhap so nguyen thu 5: \n");
	scanf("%d", &n5);
	if( n1 % 2 == 0){
		count1 += 1; 
	}else{
		count2 += 1; 
	}
	if( n2 % 2 == 0){
		count1 += 1; 
	}else {
		count2 += 1;
	}
    if( n3 % 2 == 0){
		count1 += 1; 
	}else{ 
	    count2 += 1;
	}	
	if( n4 % 2 == 0){
		count1 += 1; 
	}else{
		count2 += 1;
	}
	if( n5 % 2 == 0){
		count1 += 1; 
	}else{
		count2 += 1;
	}
	printf("So chan : %d", count1);
	printf("So le : %d", count2); 
	return 0;    
} 
