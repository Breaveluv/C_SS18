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
        printf("Please input student%d's information : \n",i+1);
        printf("Input the name : ");
        fgets(user[i].name, 50, stdin);
        user[i].name[strcspn(user[i].name,"\n")]='\0';
        printf("Input the age : ");
        scanf("%d",&user[i].age);
        fflush(stdin);
        printf("Input the phone number : ");
        fgets(user[i].phoneNumber, 50, stdin);
        user[i].phoneNumber[strcspn(user[i].phoneNumber,"\n")]='\0';
    }
    int i;
    printf("Input ID to repair : ");
    scanf("%d",&i);
        printf("ID : %d\n",i);
        printf("Name of student%d : %s\n",i,user[i].name);
        printf("Age of student%d : %d\n",i,user[i].age);
        printf("Phone number of student%d : %s\n",i,user[i].phoneNumber);
    char newName[50];
    printf("Input a new name : ");
    getchar();
    fgets(newName, 50, stdin);
    newName[strcspn(newName, "\n")]='\0';
    strcpy(user[i].name,newName);
    printf("Input a new age : ");
    scanf("%d",&user[i].age);
    fflush(stdin);
    printf("ID : %d\n",i);
    printf("Name of student%d : %s\n",i,user[i].name);
    printf("Age of student%d : %d\n",i,user[i].age);
    printf("Phone number of student%d : %s\n",i,user[i].phoneNumber);
    return 0;
}
