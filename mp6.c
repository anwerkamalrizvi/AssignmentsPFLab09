/* Create a function that returns the maximum and minimum element in an integer array. Use this
function in the main program to find the maximum and minimum from an array entered by the
user.*/ 
#include <stdio.h>

int arrMaxMin(int n, int arr[n]){
    int min = arr[0], max = arr[0];
    for(int i=0;i<n;i++){
        if(min<arr[i]){
            min = arr[i];
        }
        if(max>arr[i]){
            max=arr[i];
        }
    }//end for loop
    return (min,max);
}

int main() {
    int n;
    printf("Enter length of the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
      printf("Enter element[%d]: ",i+1);
      scanf("%d",&arr[i]);
    }//end for
    arrMaxMin(n,arr);
    printf("\n min: %d max: %d",arrMaxMin(n,arr));
    return 0;
}