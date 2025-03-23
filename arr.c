#include<stdio.h>
int main(){
    int arr[50],n,i;
    printf("enter the elements in the array\n");
    scanf("%d",&n);
    printf("Enter %d elements in the array:\n", n);

    for (i=0;i<n;i++){
    scanf("%d",&arr[i]);    
    }    
printf("the elemenets in the array are" );

for (i=0;i<n;i++){
     
    printf("%d ",  arr[i]);  
    }  
    printf("\n");  
   return 0;
}