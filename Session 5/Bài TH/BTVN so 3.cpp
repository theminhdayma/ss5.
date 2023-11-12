#include <stdio.h>
main(){
	int minute,money;
	printf("Nhap so phut: ");
	scanf("%d",&minute);
	if(minute<=50){
		money=minute*600+25000;
	}else if(minute<=200){
		money=(50*600+(minute-50)*400)+25000;
	}else if(minute<=400){
		money=(50*600+150*400+(minute-200)*200)+25000;
	}else{
			money=(50*600+150*400+200*200+(minute-400)*100)+25000;
	}
	printf("Cuoc dien thoai ban trong 1 thang la: %d VND",money);
}
