#include <stdio.h>




 char gamer[4][4][22] = {

        {"PC", "Dark Souls", "Apex Legends", "Fortnite"},

        {"Xbox", "Halo", "Resident Evil", "Red Dead Redemption"},

        {"PlayStation", "Call of Duty:Warzone", "Red Dead Redemption", "God of War"},

        {"Nintendo", "Super Smash Bros", "Apex Legends", "Darks Souls"}

    };
    
int main(int argc, char*argv[]){

	char choice;
	int choice2;
	printf("Available Systems: A)%s\tB)%s\tC)%s\tD)%s\n", gamer[0][0], gamer[1][0], gamer[2][0], gamer[3][0]);
	printf("Choose a System: ");
	scanf("%c", &choice);
	
	
	if(choice == 'A'){
		
		printf("Available games on %s: 1)%s\t2)%s\t3)%s\t", gamer[0][0], gamer[0][1], gamer[0][2], gamer[0][3]);
		scanf("Choose a Game: ");
		scanf("%d", &choice2);
	
	}
	
	if(choice == 'B'){
		
		printf("Available games on %s: 1)%s\t2)%s\t3)%s\t", gamer[1][0], gamer[1][1], gamer[1][2], gamer[1][3]);
		scanf("Choose a Game: ");
		scanf("%d", &choice2);
	
	}
	
	if(choice == 'C'){
		
		printf("Available games on %s: 1)%s\t2)%s\t3)%s\t", gamer[2][0], gamer[2][1], gamer[2][2], gamer[2][3]);
		scanf("Choose a Game: ");
		scanf("%d", &choice2);
	
	}
	
	if(choice == 'D'){
		
		printf("Available games on %s: 1)%s\t2)%s\t3)%s\t", gamer[3][0], gamer[3][1], gamer[3][2], gamer[3][3]);
		scanf("Choose a Game: ");
		scanf("%d", &choice2);
	
	}
	
	
	
	
	printf("%s selected %s on %s\n", argv[1], gamer[0][choice2], gamer[0][0]);
	







	return 0;
}
