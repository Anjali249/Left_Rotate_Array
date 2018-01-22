//C Program to left rotate an arry by n positions

#include <stdio.h>
#include <stdlib.h>

//Function to left shift array by 1 position
void leftrotateone(int arr[], int n){
    int z,i,j;
    z= arr[0];
    for(i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
        arr[i]=z;  
}

//Left shift array by k positions
void leftrotate(int arr[], int n, int k){
    int i,j;
    for(i=0; i<k; i++){
        leftrotateone(arr, n);
    }
}

//Function to Print Array
void printarray(int arr[], int n){
    int x;
    for(x=0;x<n;x++)
    {
        printf("%d",arr[x]);
    }
    printf("\n");
}

int main()
{
    int k,a_i,n; 
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter number of rotation: ");
    scanf("%d",&k);
    
    int *a = malloc(sizeof(int) * n);

    for(a_i = 0; a_i < n; a_i++){
       printf("Enter element %d : ",a_i+1);
       scanf("%d",&a[a_i]);
    } 
    leftrotate(a,n,k);
    printf("Left shifted array by %d rotation is: ",k);
    printarray(a, n);
    return 0;
}
