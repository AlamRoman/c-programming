#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
The birthday problem asks for the probability that, in a set of n randomly chosen people, at least two will share a birthday.
The birthday paradox is that the probability of a shared birthday exceeds 50% in a group of only 23 people.
*/

int main(){
    int persons=50;//number of peoples
    int i,j,birthday,birthmonth,random,searching_day,searching_month,match_found=0;
    int day[31]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    int month[12]={1,2,3,4,5,6,7,8,9,10,11,12};
    int birthdates[persons][2];
    srand(time(NULL));

    for ( i = 0; i < persons; i++)
    {
        random=rand() % 12;
        birthmonth=month[random];
        birthdates[i][2]=birthmonth;

        if (birthmonth==1 || birthmonth==3 || birthmonth==5 || birthmonth==7 || birthmonth==8 || birthmonth==10 || birthmonth==12)
        {
            random=rand() % 31;
            birthday=day[random];
            birthdates[i][1]=birthday;
        }else if (birthmonth==2)
        {
            random=rand() % 28;
            birthday=day[random];
            birthdates[i][1]=birthday;
        }else
        {
            random=rand() % 30;
            birthday=day[random];
            birthdates[i][1]=birthday;
        }
        
        printf("Person %d:\tDay:\t%d\tMonth:\t%d\n",i+1,birthdates[i][1],birthdates[i][2]);
        
    }

    printf("\nPress any key to start searching: ");
    getch();
    printf("\n\n");

    
    for ( i = 0; i < persons; i++)
    {
        searching_day=birthdates[i][1];
        searching_month=birthdates[i][2];

        for ( j = 0; j < persons; j++)
        {
            if (j==i)
            {
                continue;
            }else if (birthdates[j][1]==birthdates[i][1])
            {
                if (birthdates[j][2]==birthdates[i][2])
                {
                    printf("Match found with person %d and person %d\n",i,j);
                    match_found++;
                } 
            } 
        }
        
    }
    
    if (match_found==0)
    {
        printf("No match found\n");
    }else
    {
        printf("\nMatch found: %d\n",match_found/2);
    }
    
    getch();

    return 0;
}