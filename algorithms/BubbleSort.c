#include <stdio.h>

int main(){
    int i,j,temp,counter=0;
    int size = 5;
    int arr[5]={5,4,3,2,1};

    printf("Array: ");
    for (i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    for ( i = 0; i < size-1; i++)
    {
        for(j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                counter=1;

            }
        }
        if (counter==0)
        {
            break;
        }

    }

    printf("Sorted array: ");
    for (i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}