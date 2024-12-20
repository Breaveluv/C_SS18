#include <stdio.h>

int main(]) {
    struct Student{
        char name[50];
        int age;
        char phoneNumber[20];
    };
    struct Student user01 ={"Vu Hoai Nam", 18,"0284567821"};
    printf("Name : %s\n",user01.name);
    printf("Age : %d\n",user01.age);
    printf("PhoneNumber : %s\n",user01.phoneNumber);
    return 0;
}

