#include <stdio.h>
#include <stdlib.h>

//Temperature converter from F to C or C to F

int main(){
    
    float fahr, celsius;
    char choice;
    
    printf("F or C?: ");
    scanf("%c", &choice);
    
    if(choice == 'C' || choice == 'c'){
    	   printf("Enter a Celsius degree: ");
    	   scanf("%f", &celsius);
    
           fahr = ((celsius*9)/5) + 32;
    
           printf("%.2f in Celsius is %.2f in Fahrenheit\n", celsius, fahr);
    
    }
    
    else if (choice == 'F' || choice == 'f'){
    
         printf("Enter a Fahrenheit degree: ");
         scanf("%f", &fahr);
    
         celsius = 5 * (fahr - 32) / 9;
         printf("%.2f degrees in Fahrenheit is %.2f degrees in Celsius\n", fahr, celsius);
    
    }
   

}
