#include <stdio.h>
#include <windows.h>
#include <conio.h>

int hour,minute,second;

void timeinput(){
    printf("input hour minute second:\n");
    
    printf("Hour:");
    scanf("%d",&hour);
    printf("Minute:");
    scanf("%d",&minute);
    printf("Second:");
    scanf("%d",&second);
    
}

void formatcheck(){
    int m1=0,h1=0;
   while (second>=60){
       second=second-60;
       m1++;
   }
   while(minute>=60){
       minute=minute-60;
       h1++;
   }
  minute=minute+m1;
  hour=hour+h1;
}

void stopwatch(){

timeinput();
formatcheck();
    
   int h,m,s;
  for(h=0;h<=hour;h++){
       for(m=0;m<=59;m++){
           for(s=0;s<=59;s++){
               
              Sleep(1000);   
               system("cls");
                
               printf("STOPWATCH:   %.2d : %.2d : %.2d\n",h,m,s); 
   

              if(m==minute && s==second){
                  break;
              }
           }
           if(h==hour && m==minute){
               break;
           }             
   }
 }

}

int main(){
    stopwatch();

while (1){
    char yn;
    printf("Do you want use the stopwatch again?(Y/N):\n");
    scanf(" %c",&yn);
if (yn=='Y')
{
    stopwatch();
}else if (yn=='N')
{
    break;
}else
{
    printf("Incorrect input\n");
}

}



    return 0;
}