#include<stdio.h>

int main(){
    float Math,english,pst,islamiat,computer,obt_marks,percentage,total_mark,cgpa;
    printf("Enter Total mark : ");
    scanf("%f",&total_mark);

printf("Enter your Math marks : ");
scanf("%f",&Math);

printf("Enter your English marks : ");
scanf("%f",&english);

printf("Enter your PST marks : ");
scanf("%f",&pst);

printf("Enter your Computer marks : ");
scanf("%f",&computer);

printf("Enter your Islamiat marks : ");
scanf("%f",&islamiat);

  printf("\n------------------------------------------------\nSTUDENT ACADEMIC RESULT\n------------------------------------------------\n");
printf("Total Makrs : %.2f\n",total_mark);

  printf("Math Marks : %.2f\n",Math);

  printf("Computer Marks : %.2f\n",computer);

 printf("PST Marks : %.2f\n",pst);

  printf("English Marks : %.2f\n",english);

printf("Islamiat Marks : %.2f\n",islamiat);

    printf("------------------------------------------------\n");

obt_marks=(english+computer+islamiat+pst+Math);
percentage=(obt_marks*100)/total_mark;
cgpa=(percentage/25);

printf("Obtained Marks : %.2f\n",obt_marks);
printf("Percentage : %.2f%%\n",percentage);
printf("CGPA : %.2f/4.00\n",cgpa);

  printf("------------------------------------------------\n");



return 0;
}
