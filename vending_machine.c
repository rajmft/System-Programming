#include <stdio.h> 
#include <stdlib.h>
#include <string.h>


/*
 *Vending Machine Example
 *User selects a snack and drink, dispenses change
 */

void get_change(char selection[2][20],float cost){
	
	
	float change;
	float money;
	
	int dollar = 0;
	int quarter = 0;
	int dime = 0;
	int nickel = 0;
	int penny = 0;
	
	printf(">>Please Enter a currency: ");
	scanf("%f", &money);
	change = money - cost;
	
	
	
	for(int i = 1; i < 20; i++){
		if(change >= 1.00){
			change = change - 1.00;
			dollar ++;
		}
		else if(change >= .25){
			change = change - .25;
			quarter ++;
		}
		else if (change >= .1){
			change = change - .10;
			dime ++;
		}
		else if(change >= .05){
			change = change - .05;
			nickel ++;
		}
		else if(change >= .01){
			change = change - .01;
			penny ++;
		}
				
		
	}
	
	printf(">>You selected %s and %s. Your change is %d dollar(s), %d quarter(s), %d dime(s), %d nickel(s), %d pennies.", selection[0],selection[1],dollar, quarter, dime, nickel, penny);
}


void pick_drink(char selection[2][20], char choice[20], char index[4][22], float cost, float drinkPrices[]){
	
	char choice2;
	printf("\n>>Please Select a drink");
	printf("\nItem 1: ");
	scanf("%s", &choice[0]);
	
	//Error Checking
	while(strcmp(choice, index[0])!=0&&strcmp(choice, index[1])!=0&&strcmp(choice, index[2])!=0&&strcmp(choice, index[3])!=0&&strcmp(choice, index[4])!=0&&strcmp(choice, index[5])!=0){
    	printf("Item chosen not a drink, choose again.");
    	pick_drink(selection,choice, index, cost,drinkPrices);
    }	
    
    
	
	if(strcmp(choice, "B2")==0){
		printf("Price: $%.2f\n",drinkPrices[0]);
		printf("\nAre you sure? (Y/N): ");
		scanf(" %c",&choice2);
		if(choice2 == 'Y'){
			cost = cost + drinkPrices[0];
			strcpy(selection[1], "Coffee");
			get_change(selection,cost);
			
		}
		else
			pick_drink(selection,choice, index, cost, drinkPrices);
	}
      
    else if(strcmp(choice, "T5")==0){
		printf("Price: $%.2f\n",drinkPrices[1]);
		printf("\nAre you sure? (Y/N): ");
		scanf(" %c",&choice2);
		if(choice2 == 'Y'){
			cost = cost + drinkPrices[1];
			strcpy(selection[1], "PureLife");
			get_change(selection,cost);
			
		}
		else
			pick_drink(selection,choice, index, cost, drinkPrices);
	}
      
      

	else if(strcmp(choice, "R6")==0){
		printf("Price: $%.2f\n",drinkPrices[2]);
		printf("\nAre you sure? (Y/N): ");
		scanf(" %c",&choice2);
		if(choice2 == 'Y'){
			cost = cost + drinkPrices[2];
			strcpy(selection[1], "Pepsi");
			get_change(selection,cost);
			
			
		}
		else
			pick_drink(selection,choice, index, cost, drinkPrices);
			
	}
      
      


}

void pick_item(char selection[2][20], char choice[20], char index[7][22], char snacks[7][22], char dindex[4][22], float snackPrices[], float drinkPrices[], float cost){
	
	char choice2;
	
	printf("\n\n>>Please Select a snack");
	printf("\nItem 1: ");
	scanf("%s", &choice[0]);
	
    //////Errror Checking
    while(strcmp(choice, index[0])!=0&&strcmp(choice, index[1])!=0&&strcmp(choice, index[2])!=0&&strcmp(choice, index[3])!=0&&strcmp(choice, index[4])!=0&&strcmp(choice, index[5])!=0){
    	printf("Item chosen not a snack, choose again.");
    	pick_item(selection, choice, index, snacks,dindex, snackPrices, drinkPrices, cost);
    }	
    

	if(strcmp(choice, "E7")==0){
		printf("Price: $%.2f\n",snackPrices[0]);
		printf("\nAre you sure? (Y/N): ");
		scanf(" %c",&choice2);
		if(choice2 == 'Y'){
			cost = cost + snackPrices[0];
			strcpy(selection[0], snacks[0]);
			pick_drink(selection,choice, dindex, cost, drinkPrices);
			
		}
		else
			pick_item(selection,choice, index, snacks,dindex, snackPrices, drinkPrices, cost);
		
	}
	else if(strcmp(choice, "G4")==0){
		printf("Price: $%.2f\n",snackPrices[1]);
		printf("\nAre you sure? (Y/N): ");
		scanf(" %c",&choice2);
		if(choice2 == 'Y'){
			cost = cost + snackPrices[1];
			strcpy(selection[0], snacks[1]);
			pick_drink(selection,choice, dindex, cost, drinkPrices);
			
		}
		else
			pick_item(selection,choice, index, snacks, dindex, snackPrices, drinkPrices, cost);
	}
	else if(strcmp(choice, "C3")==0){
		printf("Price: $%.2f\n",snackPrices[2]);
		printf("\nAre you sure? (Y/N): ");
		scanf(" %c",&choice2);
		if(choice2 == 'Y'){
			cost = cost + snackPrices[2];
			strcpy(selection[0], snacks[2]);
			pick_drink(selection,choice, dindex, cost, drinkPrices);
			
		}
		else
			pick_item(selection,choice, index,snacks, dindex, snackPrices,  drinkPrices, cost);
	}
	else if(strcmp(choice, "D9")==0){
		printf("Price: $%.2f\n",snackPrices[3]);
		printf("\nAre you sure? (Y/N): ");
		scanf(" %c",&choice2);
		if(choice2 == 'Y'){
			cost = cost + snackPrices[3];
			strcpy(selection[0], snacks[3]);
			pick_drink(selection,choice, dindex, cost, drinkPrices);
	
			
		}
		else
			pick_item(selection,choice, index,snacks, dindex, snackPrices, drinkPrices, cost);
	}

    else if(strcmp(choice, "K5")==0){
		printf("Price: $%.2f\n",snackPrices[4]);
		printf("\nAre you sure? (Y/N): ");
		scanf(" %c",&choice2);
		if(choice2 == 'Y'){
			cost = cost + snackPrices[4];
			strcpy(selection[0], snacks[4]);
			pick_drink(selection,choice, dindex, cost, drinkPrices);
			
		}
		else
			pick_item(selection,choice, index, snacks,dindex, snackPrices, drinkPrices, cost);
	}
	else if(strcmp(choice, "Q8")==0){
		printf("Price: $%.2f\n",snackPrices[5]);
		printf("\nAre you sure? (Y/N): ");
		scanf(" %c",&choice2);
		if(choice2 == 'Y'){
			cost = cost + snackPrices[5];
			strcpy(selection[0], snacks[5]);
			pick_drink(selection,choice, dindex, cost, drinkPrices);
			
		}
		else
			pick_item(selection,choice, index, snacks,dindex, snackPrices, drinkPrices, cost);
	}
	
}

int main(int argc, char*argv[]){
	
	char choice[20];
	char selection[2][20];
	float cost;
	
	char snacks[7][22] = {"Pop-Tart", "S&V Lays", "M&Ms", "Cheetos", "BBQ Lays", "Granola"};
	char drinks[4][22] = {"Coffee", "PureLife", "Pepsi"};
	char snackIndex[7][22] = {"E7","G4","C3", "D9", "K5", "Q8"};
	char drinkIndex[4][22] = {"B2", "T5", "R6"};
	float snackPrices[] = {1.63,1.49,1.72,1.59,1.72,1.17};
	float drinkPrices[] = {2.76,1.88,2.29};
	
	
	printf(">>Available Items: \n%s)%s    %s)%s   %s)%s   \n%s)%s        %s)%s    %s)%s    \n%s)%s    %s)%s    %s)%s",snackIndex[0],snacks[0],drinkIndex[0],drinks[0]
	,snackIndex[1],snacks[1],snackIndex[2],snacks[2],drinkIndex[1],drinks[1],snackIndex[3],snacks[3],snackIndex[4],snacks[4],drinkIndex[2],drinks[2],snackIndex[5],snacks[5]);
	
	
	pick_item(selection,choice,snackIndex,snacks, drinkIndex, snackPrices,drinkPrices,cost);
	
	
	
 
    return 0;
	
}

	
