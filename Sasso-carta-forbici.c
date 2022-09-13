#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int mode=2;
int playerscore,computerscore;

int rnd(int num){
    time_t t;
    srand((unsigned) time(&t));
       // random=floor(random / 10);
    num=rand() % 3;
    num += 1;
    return num;
}


int home(){

    int scelta,playerscore=0,computerscore=0;;

    printf("\t\tSasso - Carta - Forbici\n\n");
    printf("\t1. Gioca\n");

    if (mode==1)
    {
        printf("\t2. Difficolta: Facilissimo\n");
    }else if (mode==2)
    {
        printf("\t2. Difficolta: Normale\n");
    }else if (mode==3)
    {
        printf("\t2. Difficolta: Impossibile\n");
    }
    
    printf("\t3. About\n");
    printf("\t4. Esci\n");

    scanf("%d",&scelta);

    switch (scelta)
    {
    case 1:
        system("cls");

        if (mode == 1)
        {
            playEasy();

        }else if (mode == 2)
        {
            playNormal();

        }else
        {
            playhard();
        }

        break;
    case 2:
        difficolta();
        break;
    case 3:
        about();
        break;
    case 4:
        return 0;
        break;
    
    default:
        break;
    }
}

int difficolta(){
    int scelta;
    system("cls");

    printf("\t\tScegli Difficolta\n\n");
    printf("\t1. Facilissimo\n");
    printf("\t2. Normale\n");
    printf("\t3. Impossibile\n");
    printf("\t4. Ritorna\n");
    scanf("%d",&scelta);

    switch (scelta)
    {
    case 1:
        mode=1;
        //diff="Facilissimo";
        break;
    case 2:
        mode=2;
        //diff="Normale";
        break;
    case 3:
        mode=3;
        //diff="Impossibile";
        break;
    
    default:
        break;
    }
    system("cls");
    home();

    return 0;
}

int about(){
    system("cls");

    printf("Made with C\n");
    getch();
    system("cls");
    home();
    return 0;
}

void score(){

    printf("\n    Player   |   Computer\n");
    printf("-------------------------\n");
    printf("       %d     |     %d\n",playerscore,computerscore);
}

void playAgain(){

    printf("\nPremi 'a' per giocare ancora\n");
    char repeat;
    repeat=getch();

    if (repeat=='a')
    {
        system("cls");
        
        if (mode == 1)
        {
            playEasy();

        }else if (mode == 2)
        {
            playNormal();

        }else
        {
            playhard();
        } 
        
    }
}

int playNormal(){

    int scelta,random;

    random = rnd(random);

    printf("\t\tDifficolta Normale\n\n");

    printf("\tInserisci la tua scelta: \n\n\t1.Sasso\n\t2.Carta\n\t3.Forbici\n");
    scanf("%d",&scelta);
    system("cls");

     
    switch (scelta)
    {
    case 1:
        if (random == 1)
        {
           
           printf("Tu hai scelto 'Sasso' - Computer ha scelto 'Sasso' \n" );
           printf("\t\t*** Pari *** \n" );
           score();
        }else if (random== 2)
        {
            printf("Tu hai scelto 'Sasso' - Computer ha scelto 'Carta' \n" );
            printf("\t\t*** Computer vinto *** \n" );
            computerscore++;
            score();
        }else{
            printf("Tu hai scelto 'Sasso' - Computer ha scelto 'Forbici' \n" );
            printf("\t\t*** Hai vinto *** \n" );
            playerscore++;
            score();
        }
        
        
        break;
    case 2:
        if (random == 1)
        {
            printf("Tu hai scelto 'Carta' - Computer ha scelto 'Sasso' \n" );
            printf("\t\t*** Hai vinto *** \n" );
            playerscore++;
            score();
        }else if (random== 2)
        {
            printf("Tu hai scelto 'Carta' - Computer ha scelto 'Carta' \n" );
            printf("\t\t*** Pari *** \n" );
            score();
        }else{
            printf("Tu hai scelto 'Carta' - Computer ha scelto 'Forbici' \n" );
            printf("\t\t*** Computer vinto *** \n" );
            computerscore++;
            score();
        }

        break;
    case 3:
        if (random == 1)
        {
            printf("Tu hai scelto 'Forbici' - Computer ha scelto 'Sasso' \n" );
            printf("\t\t*** Computer vinto *** \n" );
            computerscore++;
            score();
        }else if (random== 2)
        {
            printf("Tu hai scelto 'Forbici' - Computer ha scelto 'Carta' \n" );
            printf("\t\t*** Hai vinto *** \n" );
            playerscore++;
            score();
        }else{
            printf("Tu hai scelto 'Forbici' - Computer ha scelto 'Forbici' \n" );
            printf("\t\t*** Pari *** \n" );
            score();
        }

        break;    
    default:
        printf("!!! Scelta sbagiata !!!\n");
        break;
    }
    playAgain();

    return 0;
}

int playhard(){

    int scelta,random;

    random = rnd(random);

    printf("\t\tDifficolta Impossibile\n\n");

    printf("\tInserisci la tua scelta: \n\n\t1.Sasso\n\t2.Carta\n\t3.Forbici\n");
    scanf("%d",&scelta);
    system("cls");

    if (scelta == 1)
    {
        printf("Tu hai scelto 'Sasso' - Computer ha scelto 'Carta' \n" );
        printf("\t\t*** Computer vinto *** \n" );
        computerscore++;
        score();

    }else if (scelta == 2)
    {
        printf("Tu hai scelto 'Carta' - Computer ha scelto 'Forbici' \n" );
        printf("\t\t*** Computer vinto *** \n" );
        computerscore++;
        score();

    }else if (scelta == 3)
    {
        printf("Tu hai scelto 'Forbici' - Computer ha scelto 'Sasso' \n" );
        printf("\t\t*** Computer vinto *** \n" );
        computerscore++;
        score();

    }else
    {
        printf("!!! Scelta sbagiata !!!\n");
    }

    playAgain();

    return 0;
}

int playEasy(){

    int scelta,random;

    random = rnd(random);

    printf("\t\tDifficolta Facilissimo\n\n");

    printf("\tInserisci la tua scelta: \n\n\t1.Sasso\n\t2.Carta\n\t3.Forbici\n");
    scanf("%d",&scelta);
    system("cls");

    if (scelta == 1)
    {
        printf("Tu hai scelto 'Sasso' - Computer ha scelto 'Forbici' \n" );
        printf("\t\t*** Hai vinto *** \n" );
        playerscore++;
        score();

    }else if (scelta == 2)
    {
        printf("Tu hai scelto 'Carta' - Computer ha scelto 'Sasso' \n");
        printf("\t\t*** Hai vinto *** \n" );
        playerscore++;
        score();

    }else if (scelta == 3)
    {
        printf("Tu hai scelto 'Forbici' - Computer ha scelto 'Carta' \n");
        printf("\t\t*** Hai vinto *** \n" );
        playerscore++;
        score();

    }else
    {
        printf("!!! Scelta sbagiata !!!\n");
    }

    playAgain();
    
    return 0;
}

int main(){  
    
    home();
    
    return 0;
} 