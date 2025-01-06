#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc,char *argv[]) {

int choose,location;
int n=4;
int count=-1;
Category category[50]= {
	{1,"Thuc pham"},
	{2,"Do gia dung"},
	{3,"Van phong pham"},
	{4,"The dien thoai"},
};

while(choose!=3) {
	printf("=============================\n");
	printf("***___STORE MANAGEMENT___***\n");
	printf("1.Quan ly danh muc\n");
	printf("2.Quan ly san pham\n");
	printf("3.Thoat\n");
	printf("=============================\n");
	printf("Moi ban nhap lua chon cua minh:");
	scanf("%d",&choose);
	switch (choose) {
		case 1:// Quan ly danh muc
		system("cls");
		while(choose!=7) {
				printfFunction();
				printf("Lua chon cua ban:");
				scanf("%d",&choose);
			switch (choose) {
				case 1:
					system("cls");
					printfCategory(category,n);
					break;
				case 2:
					system("cls");
					n++;
					addCategory(category,location,n);
					break;
				case 3:
					system("cls");
					fixCategory(category,location,n);
					break;
				case 4:
					system("cls");
					n--;
					deleteCategory(category,location,n);
					break;
				case 5:
					system("cls");
					break;
				case 6:
					system("cls");
					break;
				case 7:
					system("cls");
					break;
			}
		}
			break;
		case 2://Quan ly san pham
			break;
		case 3://Thoat
			break;
	}
	
}



	
	return 0;
}
