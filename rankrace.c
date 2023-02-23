#include <stdio.h>


/*
*Program to rank people in a race
*User inputs name along with corresponding time
*Outputs name and time with ranking
*/


struct p {
	char name[100];
	float time;

};



int main(){

	int ranking; 
	int rankings[] = {1,2,3,4,5,6,7,8,9,10};
	
	struct p people[10];
	for (int i = 0; i < 10; i++){
		printf("Enter a name: ");
		scanf("\n%s", people[i].name);
		printf("Enter the time: ");
		float x;
		scanf("\n%f", &x);
		
		people[i].time = x;
	
	}
	
	struct p temp;
	for (int i = 0; i < 10; i++){
		for (int j = i + 1; j < 10; j++){
			if(people[i].time > people[j].time){
				temp = people[i];
				people[i] = people[j];
				people[j] = temp;
		
		
		}
	
	  }
	
	}
	
	printf("Enter rankings: ");
	scanf("\n%d", &ranking);
	
	for(int i = 0; i < ranking; i++){
		printf("%d) %s - %.2fs\n", rankings[i], people[i].name, people[i].time);
	
	}
	
	return 0;
	
	


}
