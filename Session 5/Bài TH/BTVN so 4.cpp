#include <stdio.h>
main(){
    float total_income,salary,tax;
	printf("Nhap tong so thu nhap cua nhan vien: ");
	scanf("%f",&total_income);
	if(total_income<=5){
		tax=total_income*0.05;
		salary=total_income-tax;
	}else if(total_income<=10){
		tax=total_income*0.1;
		salary=total_income-tax;
	}else if(total_income<=18){
		tax=total_income*0.15;
		salary=total_income-tax;
	}else if(total_income<=32){
		tax=total_income*0.2;
		salary=total_income-tax;
	}else if(total_income<=52){
		tax=total_income*0.25;
		salary=total_income-tax;
	}else if(total_income<=80){
		tax=total_income*0.3;
		salary=total_income-tax;
	}else{
		tax=total_income*0.35;
		salary=total_income-tax;
	}
	printf("Tien thue thang nay cua nhan vien la: %.2f trieu\n",tax);
	printf("Tien luong thang nay cua nhan vien la: %.2f trieu\n",salary);
}
