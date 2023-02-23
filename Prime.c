#include <stdio.h> 
#include <stdlib.h>


//Determines if an integer is prime

void prime(int x){
    int y = 0;
    for(int i=2; i <= x/2; i++){
    	
    	if(x%i == 0){
    		y = 1;
    		printf("%d is not a prime number, because it is divisible by %d",x,i);
    		break;
    	}
    }
    
    if(y!= 1){
    	printf("%d is a prime number.", x);
    }
    
    
   
}



int main(){

	int x;
	
	printf("Please enter a positive number: ");
	
	scanf("%d", &x);
	
	prime(x);
	
	return 0;
}
