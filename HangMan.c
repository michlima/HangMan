#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


void wordchoice();
void viewword();
char word[100];


int main(){
	wordchoice();
	viewword();

	return 0;
}

void wordchoice(){

	int i = 0;

	printf("Chose a word : \n");


	//word chosen gets stored in word
	scanf("%s", word);

	//shows the user the word they chose
	printf(" >%s<  is your work choise.\n\n\n", word);
}

void viewword(){
	//char that verifies the word user choses
	char verify[1] = " ";
	//this int registers the position of the letter guess within the word chosen
	int position;
	//the bolean works to run a specific if statement if the letter is found within the word
	bool letterFound = false;

	//number of guesses left for user
	int life = 5;

	printf("Try to guess the word! \n\n");

	//int for while loop 
	int d = 0;
	//loops until user uses up his 7 guesses
	while(life != 0){

		// prints out the number of letters in the word and characters guessed
		for(int i = 0; i < strlen(word); i++){
			
			if(letterFound){
			if (i == position){
				printf("%s   ", verify);
			} else{
			printf("_   ");
		}
		} else {
			printf("_   ");
		}

		}

		printf("\n\n Guessed left: %d\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n", life);
		
		letterFound = false;


		printf("Chose a letter : ");

		//scanner that sets 'verify' to see if the word has that specific letter
		scanf("%s", verify);

		//this loops through the word searching for the guess letter
		for (int x = 0; x < 1; x++){
			char *position_ptr = strchr(word, verify[0]);
			position = (position_ptr == NULL ? -1 : position_ptr - word);
		}
		//if letter is not found:
		if(position == -1){
			printf("\nthis letter is not in the word\n\n");
			life -= 1;
		//if letter is found:
		} else {
			printf("\nthis is the %d letter in the word\n\n", position);
			letterFound = true;
		}

		if(life == 0){
			
			if (life == 0){
				printf("\t\t\t\t\t\t\t\n\n\n\n\n GAME OVER\n\n\n\n\n\n\n");
			}

		}


	}


}



