#include <stdio.h>

int main(){
	int a,b,c,d,e,sum;
	printf("Nhap so nguyen thu 1: ");
	scanf("%d", &a);
	printf("Nhap so nguyen thu 2: ");
	scanf("%d", &b);
	printf("Nhap so nguyen thu 3: ");
	scanf("%d", &c);
	printf("Nhap so nguyen thu 4: ");
	scanf("%d", &d);
	printf("Nhap so nguyen thu 5: ");
	scanf("%d", &e);
	if( a % 2 != 0){
		sum += a; 
	}
	if( b % 2 != 0){
		sum += b; 
	}
	if( c % 2 != 0){
		sum += c; 
	}
	if( d % 2 != 0){
		sum += d; 
	}
	if( e % 2 != 0){
		sum += e; 
	} 
	printf("tong cua ca so le la : %d", sum);
	
	return 0; 
} 
