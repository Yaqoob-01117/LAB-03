#include<stdio.h>
struct Student{
    char Name[50];
    int Credit_hour;
    float fee;
};
void Student_information(struct Student *student){


printf("Enter Your name : ");
scanf("%s",student->Name);

printf("Enter Your Credit Hours : ");
scanf("%d",&student->Credit_hour);

printf("Enter Your fee per credit hour : ");
scanf("%f",&student->fee);

}
void display_student( struct Student students){
  
    printf("------------------------------------------------\nUNIVERSITY FEE SLIP\n------------------------------------------------\n");
    printf("Student: %s\n",students.Name);
    printf("Credit Hours: %d\n",students.Credit_hour);
    float Total_fee=(students.Credit_hour*students.fee);
    printf("Fee per credit hour: %f PKR\n",students.fee);
    printf("------------------------------------------------\n");
    printf("Total fee: %f PKR \n",Total_fee);
    printf("------------------------------------------------\n");
}

int main(){
    struct Student student1;

    
Student_information(&student1);
display_student(student1);
 
return 0;

}