#include <stdio.h>
#include <stdlib.h>

//Find the length of an array in C

int main(){

int array[] = {5, 6, 2, 8, 8 , 7, 3, 9, 0, 8, 10};
int count = 0;


for (int i = 0; i < sizeof(array); i++){
	if(array[i] == 8){
		count++;
	}
  
}



int size = sizeof(array)/sizeof(array[0]);

int p = ((count/size)*100);

printf("The size of the array is %d", size);


   return 0;
}
