#include <stdio.h>
#include <stdlib.h>

void game(){
    printf("               ****************************\n");
    printf("               *     JACK En POY GAME     *\n");
    printf("               ****************************\n\n");
}

// Main function where the game logic is implemented
int main() {
    int player1_score = 0, player2_score = 0;
    char player1_choice, player2_choice;
    char name1[100], name2[100];
    
 
    game(); 
    // Name of players 
    printf("Player 1, Enter your name: ");
    scanf(" %[^\n]s", name1);
    system("clear");

    game();
    printf("Player 2, Enter your name: ");
    scanf(" %[^\n]s", name2);
    system("clear");

    // Game loop
    while (1) {
        
        // Player 1's choice input
        game();
        printf("%s enter your choice (R for Rock, P for Paper, S for Scissors): ",name1);
        scanf(" %c", &player1_choice);

system("clear");// Player 2 cannot see Player 1 
        
        // Player 2's choice input
        game();
        printf("%s, turn around! Enter your choice (R/P/S): ", name2);
        scanf(" %c", &player2_choice);

system("clear");

game();
  // Displaying specific hand art based on the choices made by both players, btw handart by dexi
        if ((player1_choice == 'R' || player1_choice == 'r' )&& (player2_choice == 'R' || player2_choice == 'r')){
    printf(" Player 1: %s                       Player 2: %s  \n", name1, name2);        
    printf("    _______                        ________     \n");
    printf("---'   ____)                      (____    '---\n");
    printf("      (_____)                    (_____)       \n");
    printf("      (_____)                    (_____)       \n");
    printf("      (____)                      (____)       \n");
    printf("---.__(___)                         (___)__.---\n\n");
        }
        
      else  if ((player1_choice == 'P' || player1_choice == 'p' )&& (player2_choice == 'P' || player2_choice == 'p')){
    printf(" Player 1: %s                            Player 2: %s  \n", name1, name2);        
    printf("    _______                         ________    \n");
    printf("---'   ____)____               ____(____    '---\n");
    printf("          ______)             (_______          \n");
    printf("          _______)           (________          \n");
    printf("         _______)             (____             \n");
    printf("---.__________)                (____________.---\n\n");
        }
        
     else   if ((player1_choice == 'S' || player1_choice == 's' )&& (player2_choice == 'S' || player2_choice == 's')){
    printf(" Player 1: %s                            Player 2: %s  \n", name1, name2);        
    printf("    _______                         ________    \n");
    printf("---'   ____)____               ____(____    '---\n");
    printf("          ______)             (_______          \n");
    printf("          _______)           (________          \n");
    printf("      (______)                   (______)       \n");
    printf("---. (______)                     (______) .---\n\n");
        }
        
     else  if ((player1_choice == 'R' || player1_choice == 'r' )&& (player2_choice == 'S' || player2_choice == 's')){
    printf(" Player 1: %s                            Player 2: %s  \n", name1, name2);        
    printf("    _______                          ________    \n");
    printf("---'   ____)                    ____(___   '---\n");
    printf("      (_____)                 (_______         \n");
    printf("      (_____)                (________         \n");
    printf("      (____)                     (______)       \n");
    printf("---.__(___)                       (______) .---\n\n");
        }
         
    else  if ((player1_choice == 'R' || player1_choice == 'r' )&& (player2_choice == 'P' || player2_choice == 'p')){
    printf(" Player 1: %s                            Player 2: %s  \n", name1, name2);        
    printf("    _______                         _____     \n");
    printf("---'   ____)                   ____(____    '---\n");
    printf("      (_____)                 (________         \n");
    printf("      (_____)                (_________         \n");
    printf("      (____)                  (____             \n");
    printf("---.__(___)                    (____________.---\n\n");  }
   
   
     else  if ((player1_choice == 'P' || player1_choice == 'p' )&& (player2_choice == 'R' || player2_choice == 'r')){
    printf(" Player 1: %s                            Player 2: %s  \n", name1, name2);        
    printf("    _______                         ________     \n");
    printf("---'   ____)____                  (_____    '---\n");
    printf("          ______)                (_____)        \n");
    printf("          _______)               (_____)        \n");
    printf("         _______)                 (____)        \n");
    printf("---.__________)                     (___)__.---\n\n");} 
        
     else  if ((player1_choice == 'P' || player1_choice == 'p' )&& (player2_choice == 'S' || player2_choice == 's')){
    printf(" Player 1: %s                            Player 2: %s  \n", name1, name2);        
    printf("    _______                          _______     \n");
    printf("---'   ____)____               _____(____    '---\n");
    printf("          ______)             (_______          \n");
    printf("          _______)           (________        \n");
    printf("         _______)                (______)      \n");
    printf("---.__________)                   (______) .---\n\n");} 
        
  
     else  if ((player1_choice == 'S' || player1_choice == 's' )&& (player2_choice == 'R' || player2_choice == 'r')){
    printf(" Player 1: %s                            Player 2: %s  \n", name1, name2);        
    printf("    _______                         ________      \n");
    printf("---'   ____)____                   (____     '---\n");
    printf("          ______)                (_____)         \n");
    printf("          _______)               (_____)         \n");
    printf("     (______)                   (____)         \n");
    printf("---.(______)                       (___)__ .---\n\n");
        }
        
     else   if ((player1_choice == 'S' || player1_choice == 's' )&& (player2_choice == 'P' || player2_choice == 'p')){
    printf(" Player 1: %s                            Player 2: %s  \n", name1, name2);        
    printf("    _______                         ________    \n");
    printf("---'   ____)____               ____(____    '---\n");
    printf("          ______)             (_______          \n");
    printf("          _______)           (________          \n");
    printf("     (______)                (____             \n");
    printf("---.(______)                  (____________.---\n\n");
        }
        
        
        // Game logic to determine the winner and increment scores
        if (((player1_choice == 'R' || player1_choice == 'r') &&(player2_choice == 'S'|| player2_choice == 's')) ||
            ((player1_choice == 'P' || player1_choice == 'p') && (player2_choice == 'R'|| player2_choice == 'r')) ||
            ((player1_choice == 'S' || player1_choice == 's') && (player2_choice == 'P'|| player2_choice == 'p'))) { 
            printf("-------------------------\n");
            printf("%s wins this round!:)\n", name1);
            player1_score++;
        } 
        else if ((((player1_choice == 'R' || player1_choice == 'r') &&(player2_choice == 'R'|| player2_choice == 'r')) ||
            ((player1_choice == 'P' || player1_choice == 'p') && (player2_choice == 'P'|| player2_choice == 'p')) ||
            ((player1_choice == 'S' || player1_choice == 's') && (player2_choice == 'S'|| player2_choice == 's')))) {
            printf("-------------------------\n");
            printf("It's a tie!\n");
        }
        else if (((player1_choice == 'S' || player1_choice == 's') &&(player2_choice == 'R'|| player2_choice == 'r')) ||
            ((player1_choice == 'R' || player1_choice == 'r') && (player2_choice == 'P'|| player2_choice == 'p')) ||
            ((player1_choice == 'P' || player1_choice == 'p') && (player2_choice == 'S'|| player2_choice == 's'))) {
            printf("-------------------------\n");
            printf("%s wins this round!:)\n",name2);
            player2_score++;
        }
        else {
            printf("This is invalid!\n\n");
        }


        printf("-------------------------\n");
        printf("Score : \n %s : %d \n %s : %d\n", name1, player1_score , name2, player2_score);

        // Ask players if they want to continue
        char play_again;
        printf("\nDo you want to play again? (Y/N): ");
        scanf(" %c", &play_again);
        
system("clear");

        if (play_again != 'Y' && play_again != 'y') {
            break;
        }
    }

// Displaying the final scores and the winner
game();
    printf("-------------------------------------------\n");
    printf("Final Score : \nPlayer 1 (%s): %d \nPlayer 2 (%s): %d\n",name1, player1_score, name2, player2_score);
    printf("-------------------------------------------\n");
    return 0;
} //final