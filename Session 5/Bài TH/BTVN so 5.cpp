#include <stdio.h>
int main(){
	int day, month;
	printf("Nhap ngay sinh va thang sinh: ");
	scanf("%d%d",&day,&month);
	if(0<month<13){
		switch(month){
		    case 1:
				if(0<day<20){
					printf("Ma ket");
				}else{
					printf("Bao binh");
				}
				break;
			case 2:
				if(0<day<19){
					printf("Bao Binh");
				}else{
					printf("Song Ngu");
				}
				break;
			case 3:
				if(0<day<21){
					printf("Song Ngu");
				}else{
					printf("Bach Duong");
				}
				break;
			case 4:
				if(0<day<21){
					printf("Bach Duong");
				}else{
					printf("Kim Nguu");
				}
				break;
			case 5:
				if(0<day<21){
					printf("Kim Nguu");
				}else{
					printf("Song Tu");
				}
				break;
			case 6:
				if(0<day<22){
					printf("Song Tu");
				}else{
					printf("Cu Giai");
				}
				break;
			case 7:
				if(0<day<23){
					printf("Cu Giai");
				}else{
					printf("Su Tu");
				}
				break;
			case 8:
				if(0<day<23){
					printf("Su Tu");
				}else{
					printf("Xu Nu");
				}
				break;
			case 9:
				if(0<day<23){
					printf("Xu Nu");
				}else{
					printf("Thien Binh");
				}
				break;
			case 10:
				if(0<day<24){
					printf("Thien Binh");
				}else{
					printf("Bo Cap");
				}
				break;
			case 11:
				if(0<day<23){
					printf("Bo Cap");
				}else{
					printf("Nhan Ma");
				}break;
			default:
				if(0<day<22){
					printf("Nhan Ma");
				}else{
					printf("Ma Ket");
				}
	}
	}else{
		printf("Thang sinh khong hop le");
    }
}
