#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int greater(char char1, char char2){
    //reeturns 1 if c1>c2 and 0 otherwisw
    if (char1 == char2){
        return -1;
    }
if((char1 == 'r') && (char2 == 's')){
    return 1;
}
else if ((char2 == 'r') && (char1 == 's')){
    return 0;
}
if((char1 == 'p')&& (char2 == 'r')){
    return 1;
}
else if ((char2 == 'p') && (char1 == 'r')){
    return 0;
}
if((char1 == 's')&& (char2 == 'p')){
    return 1;
}
else if ((char2 == 's') && (char1 == 'p')){
    return 0;
}
}
int main(){
    int playerScore = 0, compScore = 0,temp;
    char playerChar , compChar;
    char dict[] = {'r','p','s'};
    printf("Welcome to the Rock,Paper,Scissors.\n:");
    
    for (int i=0;i<3;i++){
        printf("Player 1's Turn:\n");
        printf("Choose 1 for rock, 2 for paper and 3 for scissors\n");
    scanf("%d",&temp);
    getchar();
    playerChar = dict[temp-1];
    printf("You choose%c\n\n",playerChar);

     printf("computer's Turn:\n");
    printf("Choose 1 for rock, 2 for paper and 3 for scissors\n");
    temp = generateRandomNumber(3) +1;
    compChar = dict[temp-1];
    printf("cpu choose%c\n\n",compChar);
    
    if(greater(compChar, playerChar) == 1)
    {
        compScore += 1;
        printf("CPU GOT it!\n");
    }
    else if(greater(compChar, playerChar) == -1)
    {
    compScore +=1;
    playerScore += 1;
    printf("Its a draw!\n");
    }
    else{
        playerScore +=1;
        printf("You got it!\n");
        
  }
  printf("YOU: %d\nCPU; %d\n\n",playerScore,compScore);
    }
    if (playerScore > compScore){
        printf("you win the game\n");
    }
    else if (playerScore < compScore){
        printf("Cpu win the game");
    }

    //printf("The random number between 0 to 5 is %d\n",generateRandomNumber(2));
    return 0;
 }
