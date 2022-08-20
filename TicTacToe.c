#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int moves=0,lastmove,loop=1,playerscore=0,computerscore=0,winner=2;

char ch[] ={'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0'};

int board(){

    system("cls");
    printf("    Player: %d   |   Computer: %d \n\n",playerscore,computerscore);
    printf(" %c | %c | %c \n",ch[0],ch[1],ch[2]);
    printf("-----------\n");
    printf(" %c | %c | %c \n",ch[3],ch[4],ch[5]);
    printf("-----------\n");
    printf(" %c | %c | %c \n",ch[6],ch[7],ch[8]);
    
    return 0;
}

int input(){
    int n;
    do
    {
        printf("\nEnter the number of your move: ");
        scanf("%d",&n);
    } while (ch[n-1] != '\0' || n < 1 || n > 9);
    n=n-1;
    ch[n]='X';
    moves++;
    lastmove=1;
    
    return 0;
}

int rnd(){
    int num;
    time_t t;
    srand((unsigned) time(&t));
       // random=floor(random / 10);
    num=rand() % 8;
    return num;
}


int computer(){
    int random;
    do
    {
        random = rnd();
    } while (ch[random] != '\0');
    ch[random]='O';
    moves++;
    lastmove=0;

    return 0;
}

int wincheck(){

    if (ch[0] == 'X' && ch[1] == 'X' && ch[2] == 'X' || ch[0] == 'O' && ch[1] == 'O' && ch[2] == 'O')
    {
        gameOver();
    }else if (ch[3] == 'X' && ch[4] == 'X' && ch[5] == 'X' || ch[3] == 'O' && ch[4] == 'O' && ch[5] == 'O')
    {
        gameOver();
    }else if (ch[6] == 'X' && ch[7] == 'X' && ch[8] == 'X' || ch[6] == 'O' && ch[7] == 'O' && ch[8] == 'O')
    {
        gameOver();
    }else if(ch[0] == 'X' && ch[3] == 'X' && ch[6] == 'X' || ch[0] == 'O' && ch[3] == 'O' && ch[6] == 'O')
    {
        gameOver();
    }else if (ch[1] == 'X' && ch[4] == 'X' && ch[7] == 'X' || ch[1] == 'O' && ch[4] == 'O' && ch[7] == 'O')
    {
        gameOver();
    }else if (ch[2] == 'X' && ch[5] == 'X' && ch[8] == 'X' || ch[2] == 'O' && ch[5] == 'O' && ch[8] == 'O')
    {
        gameOver();
    }else if (ch[0] == 'X' && ch[4] == 'X' && ch[8] == 'X' || ch[0] == 'O' && ch[4] == 'O' && ch[8] == 'O')
    {
        gameOver();
    }else if (ch[2] == 'X' && ch[4] == 'X' && ch[6] == 'X' || ch[2] == 'O' && ch[4] == 'O' && ch[6] == 'O')
    {
        gameOver();
    }if (moves>8)
    {
        draw();
    }

    return 0;
}

int gameOver(){
    if (lastmove == 1)
    {
        printf("\nYou won\n");
        playerscore++;
        winner=1;
        playagain();
        return 0;
        
    }else if(lastmove == 0){
        printf("\nComputer won\n");
        computerscore++;
        playagain();
    }
    
    return 0;
}

int draw(){

    printf("\nIts a draw\n");
    playagain();
    return 0;
}

int playagain(){
    char yn='x';
    int i;
    printf("Do you want to play again(y/n): \n");
    do
    {
        scanf("%c",&yn);
    } while (yn != 'y' && yn != 'n');
    if (yn == 'y')
    {
        //ch[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\0'};
        for ( i = 0; i < 9; i++)
        {
            ch[i]='\0';
        }
        moves=0;
        winner=2;
        system("cls");
        main();
    }else
    {
        system("cls");
        printf("    Player: %d   |   Computer: %d \n\n",playerscore,computerscore);
        getch();
        loop=0;
    }

    return 0;
}
int main(){
    
    while (loop==1)
    {
        board();
        input();
        board();
        wincheck();
        if (winner != 1)
        {
            computer();
            board();
            wincheck();
        }
        
    }
    

    return 0;
}