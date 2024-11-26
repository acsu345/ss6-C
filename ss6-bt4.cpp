#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
		printf("phuong trinh co dang a*x^2 + b*x + c =0 \n");
	    printf("nhap vao a,b,c : ");
	    scanf("%d %d %d: ",&a,&b,&c);
	if(a == 0){
		printf("phuong trinh co nghiem: %d\n", -c/b);
	}
	else{
		int delta = b*b -4*a*c;
	    printf("delta = b^2 - 4*a*c = %d\n",delta);
	    if(delta < 0){
	    	double X = -b/(2*a);
	    	printf("phuong trinh co nghiem kep : %lf\n",X);
		}
		else if ( delta != 0){
			int X1 = -(b-sqrt(delta))/2*a;
			int X2 = -(b+sqrt(delta))/2*a;
			printf("phuong trinh co hai nghiem X1= %d, X2= %i\n",X1,X2);
		}else{
			printf("Phuong trinh vo nghiem"); 
		} 
                              
	}
return 0;	
}
