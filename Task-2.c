#include<stdio.h>

struct Cafeteria
{
float coffee_price;
float biryani_price;
float roll_price;
};
void cafeteria_information(struct Cafeteria *price){
	
    
	printf("Enter Coffee price : ");
    scanf("%f",&price->coffee_price);
    printf("Enter Biryani price : ");
    scanf("%f",&price->biryani_price);
    printf("Enter Roll price : ");
    scanf("%f",&price->roll_price);
    
}

void cafeteria_display(struct Cafeteria prices){

  printf("------------------------------------------------\nCAFETERIA RECEIPT\n------------------------------------------------\n");
  
  printf("Coffe price: %.02f PKR\n",prices.coffee_price);
    printf("Biryani price: %.02f PKR\n",prices.biryani_price);
    printf("Roll price: %.02f PKR\n",prices.roll_price);

    float total_price=(prices.coffee_price+prices.biryani_price+prices.roll_price);
    float tax=(total_price*10)/100;
        float final_bill=(total_price+tax);

    printf("------------------------------------------------\n");
    printf("SUBTOTAL PRICE: %.02f PKR \n",total_price);
    printf("TAX (10%) : %.02f PKR \n",tax);
    printf("------------------------------------------------\n");
printf("FINAL BILL : %.02f PKR \n",final_bill);
 printf("------------------------------------------------\n");
}


int main(){
struct Cafeteria cafet_data;
cafeteria_information(&cafet_data);
cafeteria_display(cafet_data);
    
    return 0;
}
