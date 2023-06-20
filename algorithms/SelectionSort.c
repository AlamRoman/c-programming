//selection sort

#include <stdio.h>

int main(){

    int i,j,min_indx,temp;
    int arr[]={5,2,4,1,3};

    printf("Array: ");
    for (i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    //outer loop for all numbers

    for ( i = 0; i < 5; i++)
    {
        //inner loop to find minimum
        min_indx=i;
        for(j= i+1; j<5 ; j++){
            if (arr[j]<arr[min_indx])
            {
                min_indx=j;
            }
            
        }

        //swap two numbers
        temp = arr[i];
        arr[i]=arr[min_indx];
        arr[min_indx]=temp;
    }
    
    //print the sorted array
    
    printf("Sorted array: ");
    for ( i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}