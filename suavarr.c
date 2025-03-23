#include<stdio.h>
int main(){
    int arr[100],n,i,sum=0,avg;
    printf("enter number of elemenets in the arr");
    scanf("%d",&n);
    printf("enter %d numbers in the arr\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }    
    printf("the elemenets in the arr is \n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/2;
    printf("the sum of %d numbers is\n%d",n,sum);
    printf("\nthe avg of %d numbers is%d \n",n,avg);


printf("\n");
return 0;
}