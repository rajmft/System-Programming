#include <stdio.h>  
  

//Find the GCD of two integers


int findGCD(int a, int b)  {  

   while(b != 0)  {  

     if(a > b)  {  

        a = a - b;  

     }  

     else{  

         b = b - a;  

     }  

   }  

   return a;  

}  

int main(int argc, char*argv){  

int a, b;
int gcd = 0;   

printf("Enter the First Number: ");  

scanf("%d", &a);

printf("Enter the Second Number: ");  

scanf("%d",&b);

  

gcd = findGCD(a, b);  

printf("GCD of %d and %d = %d",a,b,gcd);  

}  





