 #include <stdio.h>
#include <string.h>
int main() {
    struct Student{
        char name[50];
        int age;
        char phoneNumber[20];
    };
    struct Student user[5];
    for(int i = 0;i<5;i++){
        printf("Moi ban nhap sinh vien thu %d's  : \n",i+1);
        printf("Ten : ");
        fgets(user[i].name, 50, stdin);
     
        printf("So Tuoi : ");
        scanf("%d",&user[i].age);
        fflush(stdin);
        printf("So dien thoai : ");
        fgets(user[i].phoneNumber, 50, stdin);
       
    }
    for(int i = 0;i<5;i++){
     
	    printf("Name of student%d : %s",i+1,user[i].name);
        printf("Age of student%d : %d",i+1,user[i].age);
        printf("\nPhone number of student%d : %s",i+1,user[i].phoneNumber);
        printf("\n");
    }
    return 0;
}
