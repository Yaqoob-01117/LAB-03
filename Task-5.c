#include<stdio.h>
#include<math.h>

int main(){
   float laptop_price,annual_interest_rate,EMI,r;
   int duration,n;


   printf("Enter Laptop price : ");
   scanf("%f",&laptop_price);
printf("Enter Annual interest (%%) : ");
scanf("%f",&annual_interest_rate);
printf("Enter Duration (yearly) : ");
scanf("%d",&duration);

  printf("\n------------------------------------------------\nlAPTOP INSTALLMENT\n------------------------------------------------\n");

  r=(annual_interest_rate/(12*100));
  n=(duration*12);

  EMI = laptop_price*(((r*(pow((1 + r),n))))/(pow((1 + r),n)-1));


printf("Laptop price: %.2f PKR\n",laptop_price);

printf("Duration: %d years (%d months) \n",duration,n);

printf("Interest rate: %.2f%% per year\n",annual_interest_rate);

  printf("Monthly installment: %.2f PKR\n",EMI);
    printf("------------------------------------------------\n");

return 0;
}

