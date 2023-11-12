#include <stdio.h>
main(){
	float money,tip_money;
	printf("Nhap so tien: ");
	scanf("%f",&money);
	if(money<=100){
		tip_money = money*0.05;
	}else if(money<=300){
		tip_money = money*0.1;
	}else{
		tip_money = money*0.2;
	}
	printf("so tien hoa hong là:%.1f trieu",tip_money);	
}

