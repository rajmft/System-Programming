#include <stdio.h>
#include <stdlib.h>

//Calculates the nth Fibonacci number

int calculate_fib(int x){
	if(x <= 1)
	return x;
    return (calculate_fib(x-1)+calculate_fib(x-2));                   
 }
int main(){
	
	int x;
	printf("Enter nth of Fibonacci: ");
	scanf("%d", &x);
	
	printf("Fibonacci is %d \n", calculate_fib(x));
	return 0;
}




