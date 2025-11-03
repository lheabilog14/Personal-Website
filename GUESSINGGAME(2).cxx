#include <stdio.h>
#include <stdlib.h>

int main() { 
    
    // Declare variables for the secret number, user guess, attempts, maximum attempts, and player name
    int myNumber = 27; 
    int userGuess;
    int attempts = 0;
    int maxAttempts = 5;
    char player_name [100];   
  
    // Welcome message and ask for player's name
         printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n                  WELCOME TO GUESSING GAME\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
         printf("What is your name? : "); 
         scanf(" %[^\n]s", player_name); 
         system("clear");

printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n                       GUESSING GAME\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");  

    // Instructions and introduction for the game
    printf("Hi %s, this is a guessing game where you will guess the secret number from 1-100.\n\n", player_name);
    printf("Instructions:\n1. You only have 5 attempts per game.\n2. You can play/guess the secret number again, until you get the correct number. And if you don't want to play again just click ""N"" for no. Then, the secret number will appear.\n\n");
    
 
        
    // Main game loop
    while (1) { 
        attempts = 0; // Reset attempts for each new game
        userGuess = 0; // Reset userGuess for each new game
    
        // Guessing loop for the player
        while (userGuess != myNumber && attempts < maxAttempts) {
            printf("Enter your guess: ");
            if (scanf("%d", &userGuess) != 1) {
                printf("Please enter a number. Try Again....\n");
                // Clear the input buffer
                while (getchar() != '\n');
                continue; // Skip the rest of the loop iteration
            }
            system("clear");
           
            // Check if the guess is correct or provide feedback
            if (userGuess == myNumber) {
                printf("                 CONGRATULATIONS! %s👏\n\n", player_name);
                printf("YYYY  YYY  OOOOO  UU   UU       W       W  III  N     N\n");
                printf(" YYY YYY  OO   OO UU   UU       W       W  III  NN    N\n");
                printf("  YYYYY   OO   OO UU   UU       W   W   W  III  N N   N\n");
                printf("   YYY    OO   OO UU   UU       W   W   W  III  N  N  N\n");
                printf("   YYY    OO   OO UU   UU       W W W W W  III  N   N N\n");
                printf("   YYY     OOOOO   UUUUU         W  W  W   III  N    NN\n");
                break;    
            }
            else if (userGuess > myNumber) {
            printf("           ===================================\n");
            printf("            your last guess, %d was too high!\n", userGuess);
            printf("           ===================================\n\n");
           attempts++;
          }
          else {
            printf("           ===================================\n");
            printf("             your last guess, %d was too low\n", userGuess);
            printf("           ===================================\n\n");
           attempts++;
           }
        
   
        // Check if the maximum attempts have been reached
        if (maxAttempts == attempts) {
            system("clear");
            printf("  _____                         ____                 \n");
    printf(" / ____|                       / __ \\                \n");
    printf("| |  __  __ _ _ __ ___   ___  | |  | |_   _____ _ __ \n");
    printf("| | |_ |/ _` | '_ ` _ \\ / _ \\ | |  | \\ \\ / / _ \\ '__|\n");
    printf("| |__| | (_| | | | | | |  __/ | |__| |\\ V /  __/ |   \n");
    printf(" \\_____|\\__,_|_| |_| |_|\\___|  \\____/  \\_/ \\___|_|   \n");
    printf("                                                    \n");
    
            break;
            }
            
        
        
       
    }
         // Ask the player if they want to play again
         if(userGuess == myNumber) {
       break; 
       }
  
       
        char play_again;
        printf("\nDo you want to guess again? (Y/N): ");
        scanf(" %c", &play_again);        
        system("clear");

printf("\n");

       // Handle player's choice to play again or not
        if (play_again != 'Y' && play_again != 'y') {
printf("               ****************************\n");
printf("               **The Secret Number is %d.**\n", myNumber);
printf("               ****************************\n");
            break;
        }
       
       
    }
    return 0;
}