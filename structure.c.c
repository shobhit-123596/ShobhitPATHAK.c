#include<stdio.h>
    struct student{
        int roll;
        char name[20];
        float marks;
        
    };
    int main() {
    struct student s1 = {1,"shobhit",85.5};
    printf("Roll: %d\n", s1.roll);
    printf("Name:%s\n", s1.name);
    printf("Marks:%.2f\n",s1.marks);
    return 0;
    }
    








