#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int runGame();

int main(){

    char response[100];

    int chipsTotal = 10000;
    
    while(1){
        printf("This is a blackjack simulator\n");
        printf("You start with 10,000 chips and can bet whatever amount you want\n");
        printf("Would you like to start? Y/N\n");
        printf(":");
        scanf("%99s", response);

        if (response[0] == 'Y'){
            runGame();
            break;
        } else {
            printf("Okay, I can wait\n");
        }
    }
    
    return 0;

}

int runGame(){

    srand(time(NULL));
    
    int betAmount;
    int* P = &betAmount;

    printf("Blackjack game started!\n");

    // Betting loop
    while (1){
        printf("How much money would you like to bet?\n");
        scanf("%d", P);
        printf("%d\n", betAmount);

        if (betAmount > 10000 || betAmount < 0){
            printf("Bet size invalid\n");
            continue;
        } else {
            printf("Good luck!\n");
            break;
        }
    }

    
    int PCard1 = (rand() % 11) + 1;
    int PCard2 = (rand() % 11) + 1;
    int DCard1 = (rand() % 11) + 1;
    int DCard2 = (rand() % 11) + 1;


    // Enumerate the P and D cards

    // Game loop
    printf("Dealer is showing a %d\n\n", DCard1);
    printf("You have a %d and a %d", PCard1, PCard2);
    printf("Hit(h) or Stand(s): ");
    char response;
    char* p = &response;
    scanf("%c", p);


    // TODO : fix this so that you can type them out with strings
    
    if (response == 'h'){

    } elif (response == 's'){
        
    } elif (response == 'd'){

    } elif (response == 't'){

    }



}