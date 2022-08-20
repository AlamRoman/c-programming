#include <stdio.h>
#include <string.h>

int numcounter=0,lettercounter=0,capital_lettercounter=0,symbolcounter=0,shortpassword=0;

int numcheck(char string[], int lenght){
    int i,j;

    for(i=0;i<=9;i++){
        char x=i+'0';
        for ( j = 0; j < lenght; j++)
        {
            if (string[j]==x)
            {
                numcounter=1;
                break;
            }
            
        }
        if (numcounter==1)
        {
            break;
        }   
        
    }

    return 0;
}

int lettercheck(char string[], int lenght){
    int i,j;
    for ( i = 97; i <= 122 ; i++)
    {
        char x=i;
        for ( j = 0; j < lenght; j++)
        {
            if (string[j]==x)
            {
                lettercounter=1;
                break;
            }
            
        }
        if (lettercounter==1)
        {
            break;
        }
        
    }

    return 0;
}

int capital_lettercheck(char string[], int lenght){
    int i,j;
    for ( i = 65; i <= 90 ; i++)
    {
        char x=i;
        for ( j = 0; j < lenght; j++)
        {
            if (string[j]==x)
            {
                capital_lettercounter=1;
                break;
            }
            
        }
        if (capital_lettercounter==1)
        {
            break;
        }
        
    }

    return 0;
}

int symbolcheck(char string[], int lenght){
    int i,j;
    for ( i = 0; i < lenght ; i++)
    {
        for ( j = 33; j <= 47; j++)
        {
            char x=j;
            if (string[i]==x)
            {
                symbolcounter=1;
                break;
            }           
        }
        if (symbolcounter==1)
        {
           break;
        }
        

        for ( j = 58; j <= 64; j++)
        {
            char x=j;
            if (string[i]==x)
            {
                symbolcounter=1;
                break;
            }           
        }
        if (symbolcounter==1)
        {
           break;
        }
    }

    return 0;
}

int main(){
    int lenght,i,j;
    char password[20];
    printf("Enter your password: ");
    scanf("%s",&password);
    lenght=strlen(password);

    if (lenght<8)
    {
        shortpassword=1;
    }
    
    numcheck(password,lenght);
    lettercheck(password,lenght);
    capital_lettercheck(password,lenght);
    symbolcheck(password,lenght);

    if (shortpassword==1)
    {
        printf("Your password must be 8 charecters or longer.\n");
    }
    if (numcounter==0)
    {
        printf("Your password must contain at least a number.\n");
    }
    if (lettercounter==0)
    {
        printf("Your password must contain at least a loyer case letter.\n");
    }
    if (capital_lettercounter==0)
    {
        printf("Your password must contain at least a capital letter.\n");
    }
    if(symbolcounter==0){
        printf("Your password must contain at least a symbol among these ( !\"#$&'()*+,-.=:;</>?@ ).\n"); 
    }
    if(shortpassword==0 && numcounter==1 && lettercounter==1 && capital_lettercounter==1 && symbolcounter==1)
    {
        printf("Your password is good\n");
    }

    getch();
    
    return 0;
}