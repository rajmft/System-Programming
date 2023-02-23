#include <stdio.h>
#include <stdlib.h> 


//Prints Pizza Menu

int main(int argc, char*argv[]){


	
	float prices[] = {8.99, 10.99,11.99,12.29,12.59,12.99,13.79,13.99,14.29,14.79,14.99,15.49,15.99,16.49,16.99,17.79,18.49,18.99,19.49};
	
	printf("PIZZA SPECIALTIES");
	printf("\n\t\t\t\tSM\tMD\tLG\tXLG\n");
	
	printf("Cheese\t\t\t\t$%.2f\t$%.2f\t$%.2f\t$%.2f\n~ the classic and the best ~ \n",prices[0], prices[1], prices[5],prices[11]);
	
	printf("\nVeggie\t\t\t\t$%.2f\t$%.2f\t$%.2f\t$%.2f\n~ any five (5) veggie toppings ~ \n",prices[1], prices[5], prices[10],prices[13]);
	
	printf("\nHawaiian\t\t\t$%.2f\t$%.2f\t$%.2f\t$%.2f\n~ pineapple & ham ~\n",prices[2], prices[6], prices[11],prices[15]);
	
	printf("\nChicken Club\t\t\t$%.2f\t$%.2f\t$%.2f\t$%.2f\n~ chicken, tomatoes, & cheese ~\n",prices[3], prices[7], prices[12],prices[16]);
	
	printf("\nChicken Bacon Ranch\t\t$%.2f\t$%.2f\t$%.2f\t$%.2f\n~ chicken, tomatoes, & ranch ~\n",prices[3], prices[7], prices[12],prices[16]);
	
	printf("\nBBQ Chicken\t\t\t$%.2f\t$%.2f\t$%.2f\t$%.2f\n~ chicken & bbq sauce ~\n",prices[4], prices[8], prices[13],prices[17]);
	
	printf("\nThe Deluxe\t\t\t$%.2f\t$%.2f\t$%.2f\t$%.2f\n~ any three (3) meat plus any three (3) veggie toppings ~ \n",prices[4], prices[9], prices[14],prices[18]);
	
	printf("\nMeat Lover\t\t\t$%.2f\t$%.2f\t$%.2f\t$%.2f\n~ pepperoni, sausage, bacon, ham ~  \n",prices[4], prices[9], prices[14],prices[18]);
	
	char last[100], first[100];
	
	
	printf("\nMENU PROVIDED BY: %s %s", argv[2], argv[1]);
	
	
	
	 
  

	return 0;
}
