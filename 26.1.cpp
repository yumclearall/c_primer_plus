#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include "26.diceroll.h"

int roll_count = 0;
int roll_n_dice(int dice, int sides);

static int rollem(int sides);

int main(void){
	int dice;
	int roll;
	int sides;
	int status;
	
	srand((unsigned int)time(0));
	
	printf("Enter the number if sides per die:");
	
	while (scanf("%d", &sides) == 1 && sides > 0){
		
		printf("how many dice?\n");
		
		if((status = scanf("%d", &dice)) != 1){
			if (status == EOF)
				break;
			else{
				printf("you should have entered an integer.");
				printf("	let's begin again.\n'");
				
				while (getchar() != '\n');
				
				printf("How many dice?");
				
				continue;
			}
		}
		
		roll = roll_n_dice(dice, sides);
		printf("You have rolled a %d using %d %d-side dice.\n", roll, dice, sides);
		printf("how many sides?\n");	
	}	
	
	printf("Ehe rollem function was called %d times.\n", roll_count);
	printf("Done.\n");
	
	return 0;
}

static int rollem(int sides){
	int roll;
	roll = rand() % sides + 1;
	++roll_count;
	
	return roll;
}

int roll_n_dice(int dice, int sides){
	int d;
	int total = 0;
	
	if (sides < 2){
		printf("Need at least 2 sides\n");
		return -2;
	}
	
	if (dice < 1){
		printf("Need at least 1 die\n");
		return -1;
	}
	
	for (d = 0; d < dice; d++){
		total += rollem(sides);
	}
	
	return total;
}
