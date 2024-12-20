#include<stdio.h>
	int main(){
		struct Student{
			char name[40];
			int age;
			char phoneNumber[20];
			
		};
		struct Student user01;
	printf("Moi ban nhap vao thong tin cua sinh vien \n");
	printf("Moi ban nhap vao Ten cua sinh vien: ");
		scanf("%s",&user01.name);
	fflush(stdin);
	printf("Moi ban nhap vao Tuoi cua sinh vien: ");
		scanf("%s",&user01.age);
	fflush(stdin);
	printf("Moi ban nhap vao so dien thoai:	");
	fgets(user01.phoneNumber,100,stdin);
	
	
		return 0;
		
	}
