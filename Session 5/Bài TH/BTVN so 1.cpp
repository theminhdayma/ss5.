#include <stdio.h>
#include <math.h>
main(){
	double a , b, c, x;
	printf("Nhap a, b, c: ");
	scanf("%f%f%f",&a,&b,&c);
	double denta = b*b -4*a*c;
	if(a != 0){
		if(denta == 0){
			x=-b/(2*a);
			printf("Phuong trinh co nghiem: %.lf",x);
		}else if(denta<0){
			printf("phuong trinh vo nghiem");
		}else {
			double x1=(-b-sqrt(denta))/(2*a);
			double  x2=(-b+sqrt(denta))/(2*a);
			printf("Phuong trinh co 2 nghiem phan biet:x1=%.lf va x2=%.lf",x1,x2);
		}
	}else{
		if(b==0){
			if(c==0){
				printf("Phuong trinh vo so nghiem");
			}else{
				printf("Phuong trinh vo nghiem");
			}
		}else{
			x=-c/b;
			printf("Phuong trinh co nghiem: %.lf",x);
		}
	}
}
