#include<stdio.h>

int main(){
float distance,fuel,fuel_price;
float efficiency,final_price;
printf("Enter traveled distance in KM : ");
scanf("%f",&distance);

printf("Enter used fuel in liters : ");
scanf("%f",&fuel);

printf("Enter fuel price per liter : ");
scanf("%f",&fuel_price);
  printf("\n------------------------------------------------\nTRAVEL EXPENSE REPORT\n------------------------------------------------\n");

efficiency=(distance/fuel);
final_price=(fuel*fuel_price);

printf("Traveled distance : %.2f Km\n",distance);
printf("Consumed fuel : %.2f L\n",fuel);
printf("Fuel price per litter : %.2f PKR\n",fuel_price);
printf("Efficiency : %.2f Km/L\n",efficiency);
printf("Total cost : %.2f PKR\n",final_price);
    printf("------------------------------------------------\n");




}