#include <stdio.h>
#include <math.h>
#define true 1

//Converts a decimal number into bynary

int digit_to_store_binary(int number){
    int n=1;
    while (true)
    {
        if (pow(2,n)>number)
        {
            return n;
        }else
        {
            n++;
        }
        
        
    }
    
}

int main(){

    int n,i;
    printf("Enter the number to convert: ");
    scanf("%d",&n);
    if (n==0)
    {
        printf("0");
        return 0;
    }
    
    int size=digit_to_store_binary(n);
    int bin[size];
    for ( i = 0; n >= 1; i++)
    {
        if (n%2==0)
        {
            bin[i]=0;
            n=n/2;
        }else
        {
            bin[i]=1;
            n=floor(n/2);
        }

    }
    
    for ( i = size-1; i >= 0; i--)
    {
        printf("%d  ",bin[i]);
    }
    

    return 0;
}