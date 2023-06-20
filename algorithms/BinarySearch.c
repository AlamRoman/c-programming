#include <stdio.h>

int main(){

    int left,right,middle,item,size=9;
    int arr[9]={15,24,43,65,75,81,85,91,95};
    item=85;
    left=0;
    right=size;
    
    while (left<=right)
    {
        middle=(left+right)/2;

        if (arr[middle]==item)
        {
            printf("%d is found at index %d\n",item,middle);
            return 0;
        }else if (item < arr[middle])
        {
            right = middle - 1;
        }else{
            left = middle + 1;
        }
        
    }

    printf("Item not found in the array\n");
    

    return 0;
}