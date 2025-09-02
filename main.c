#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int runGame();
int calculateHandValue(int cards[], int count);

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

        if (betAmount > 10000 || betAmount < 0){
            printf("Bet size invalid\n");
            continue;
        } else {
            printf("Good luck!\n");
            break;
        }
    }

    int playerCards[10];   // max 10 cards in hand
    int playerCount = 0;
    playerCards[playerCount++] = (rand() % 11) + 1;
    playerCards[playerCount++] = (rand() % 11) + 1;
    


    // Enumerate the Player(P) and Dealer(D) cards

    while(1){

        // Game loop
        printf("Dealer is showing a %d\n\n", DCard1);
        printf("You have a %d and a %d \n", PCard1, PCard2);
        printf("Hit(h) Stand(s) Double(d) or Split(t)?: ");

        char response[10];  
        scanf("%9s", response); 

        // Debug print
        printf("You typed: %s\n", response);

        if (strcmp(response, "h") == 0 || strcmp(response, "hit") == 0) {

            printf("You chose to hit.\n");
            playerCards[playerCount++] = (rand() % 11) + 1;

            printf("You now have: ");
            for (int i = 0; i < playerCount; i++) {
                printf("%d ", playerCards[i]);
            }
            printf("\n");

        } else if (strcmp(response, "s") == 0 || strcmp(response, "stand") == 0) {
            printf("yoo");
        } else if (strcmp(response, "d") == 0 || strcmp(response, "double") == 0) {
            printf("yooo");
        } else if (strcmp(response, "t") == 0 || strcmp(response, "split") == 0) {
            printf("yoooo");
        } else {
            printf("Action invalid");
        }
    }
}


int calculateHandValue(int cards[], int count){
        int total = 0;
        int aces = 0;

        for (int i = 0; i < count; i++) {
            int value = cards[i];

            // If card is Ace
            if (value == 11) {
                aces++;
            }
            total += value;
        }

        // Adjust Aces if total > 21
        while (total > 21 && aces > 0) {
            total -= 10;  // turn an Ace from 11 into 1`
            aces--;
        }

        return total;
        }