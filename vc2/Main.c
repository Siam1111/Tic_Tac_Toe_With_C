#include <stdio.h>

void startGame(int* ges);
int main(){
    int gameExitStatus = 1;
    startGame(&gameExitStatus);
    int choice = 1;
    while (choice != 0){
    printf("If you want to play Again Enter 1 . To Exit the game Enter 0 : ");
	scanf("%i" , &choice);
	gameExitStatus = choice;
    startGame(&gameExitStatus);
    }
}

void startGame(int* ges){
    int row1[3] = {'1', '4', '7'};
    int row2[3] = {'2', '5', '8'};
    int row3[3] = {'3', '6', '9'};
    char player1 = 'A';
    char player2 = 'B';
    char player;
    int playerMove;
    char activePlayer = 1;
    if(*ges != 0){
        printf("Only and Only input the Existed Number.Otherwise Problem might Raise\n");
	for(int a = 0; a < 3 ; a++){
        printf("\t\t\t\t\t%c | %c | %c \n" , row1[a] , row2[a] , row3[a]);
        printf("\t\t\t\t\t---------\n");
    }
    }
    
    while ( *ges != 0){
         // Deciding which player's move is now
    if(activePlayer == 1){
        player = player1;
    }else if(activePlayer == 2){
        player = player2;
    }
    // Player Moves
    printf("Player %c Move : " , player);
    scanf("%d" , &playerMove);

    // Executing player move
    switch(playerMove){
        case 1:
            row1[0] = (activePlayer == 1? 'O' : 'X');
            break;
        case 2:
            row2[0] = (activePlayer == 1? 'O' : 'X');
            break;
        case 3:
            row3[0] = (activePlayer == 1? 'O' : 'X');
            break;
        case 4:
            row1[1] = (activePlayer == 1? 'O' : 'X');
            break;
        case 5:
            row2[1] = (activePlayer == 1? 'O' : 'X');
            break;
        case 6:
            row3[1] = (activePlayer == 1? 'O' : 'X');
            break;
        case 7:
            row1[2] = (activePlayer == 1? 'O' : 'X');
            break;
        case 8:
            row2[2] = (activePlayer == 1? 'O' : 'X');
            break;
        case 9:
            row3[2] = (activePlayer == 1? 'O' : 'X');
            break;
    }
    for(int a = 0; a < 3 ; a++){
        printf("\t\t\t\t\t%c | %c | %c \n" , row1[a] , row2[a] , row3[a]);
        printf("\t\t\t\t\t---------\n");
    }
    if(activePlayer == 1){
        activePlayer = 2;
    }else if(activePlayer == 2){
        activePlayer = 1;
    }
	
    // Checking the Match (8 Possible Match of Success)
    if((row1[1] == row2[1]) && (row2[1] == row3[1])){
        row1[1] == 'O' ? printf("Player A Won the Game\n") : printf("Player B Won the Game\n");
        *ges = 0;
    }
    else if((row1[2] == row2[2]) && (row2[2] == row3[2])){
        row1[2] == 'O' ? printf("Player A Won the Game\n") : printf("Player B Won the Game\n");
        *ges = 0;
    }
    else if((row1[0] == row2[0]) && (row2[0] == row3[0])){
        row1[0] == 'O' ? printf("Player A Won the Game\n") : printf("Player B Won the Game\n");
        *ges = 0;
    }
    else if((row1[0] == row1[1]) && (row1[1] == row1[2])){
        row1[1] == 'O' ? printf("Player A Won the Game\n") : printf("Player B Won the Game\n");
        *ges = 0;
    }
    else if((row2[0] == row2[1]) && (row2[1] == row2[2])){
        row2[1] == 'O' ? printf("Player A Won the Game\n") : printf("Player B Won the Game\n");
        *ges = 0;
    }
    else if((row3[0] == row3[1]) && (row3[1] == row3[2])){
        row3[1] == 'O' ? printf("Player A Won the Game\n") : printf("Player B Won the Game\n");
        *ges = 0;
    }
    else if((row1[2] == row2[1]) && (row2[1] == row3[0])){
        row1[2] == 'O' ? printf("Player A Won the Game\n") : printf("Player B Won the Game\n");
        *ges = 0;
    }
    else if((row1[0] == row2[1]) && (row2[1] == row3[2])){
        row1[0] == 'O' ? printf("Player A Won the Game\n") : printf("Player B Won the Game\n");
        *ges = 0;
    }
    else{
        int endGame = 0;
        for(int i = 0 ; i < 3 ; i++){
            if(((row1[i] == 'O') || (row1[i] == 'X')) && ((row2[i] == 'O') || (row2[i] == 'X')) && ((row3[i] == 'O') || (row3[i] == 'X'))){
                endGame = 1;
            }else{
                endGame = 0;
            }
        }
        if(endGame == 1){
            printf("Match Draw\n");
            *ges = 0;
        }
        else if(endGame == 0){
            printf("Game Continues\n");
            *ges = 1;
        }
        
    }
    }
}