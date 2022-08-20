#include <stdio.h>
#include <windows.h>

void tension(){
    // V=R*I 
    system("cls");
    printf("***Calculate the electric tension***\n\n");
    float V,R,I;
    printf("Enter the valu of the resistance: ");
    scanf("%f",&R);
    printf("Enter the value of the current: ");
    scanf("%f",&I);
    printf("V=R*I\n");
    V=R*I;
    printf("The value of the electric tension is: %.2f\n",V);
    printf("\nEnter any key to continue ==>");
    getch();

}

void resistance(){
    // R=V/I
    system("cls");
    printf("***Calculate the Resistance***\n\n");
    float V,R,I;
    printf("Enter the value of the electric tension: ");
    scanf("%f",&V);
    printf("Enter the value of the current: ");
    scanf("%f",&I);
    printf("R=V/I\n");
    R=V/I;
    printf("The value of the resistance is: %f\n",R);
    printf("\nEnter any key to continue ==>");
    getch();

}

void Current(){
    // I=V/R
    system("cls");
    printf("***Calculate the Current***\n\n");
    float V,R,I;
    printf("Enter the value of the electric tension: ");
    scanf("%f",&V);
    printf("Enter the value of the resistance: ");
    scanf("%f",&R);
    printf("I=V/R\n");
    I=V/R;
    printf("The value of the current is: %f",I);
    printf("\nEnter any key to continue ==>");
    getch();

}

int input(){
       int n;
    scanf("%d",&n);
    if (n==1)
    {
        tension();
    }
    else if (n==2)
    {
        resistance();
    }
    else if (n==3)
    {
        Current();
    }
    else if (n==4)
    {
        return 0;
    }
    else
    {
        system("cls");
        printf("\n!!! Incorrect input !!!\n\n");
        choise();
        input();
    }
    
}

int choise(){
     printf("What do you want to calculute?\n Enter the number: \n    1)electric tension \n    2)Resistance\n    3)Current \n    4)Exit\n Enter here ==> ");
    return 0;
}

int main(){
    choise();
    input();
    
    return 0;
}