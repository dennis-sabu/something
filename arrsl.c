#include<stdio.h>
int main(){
    int n,i,arr[100],min,max;
    printf("enter th enumber of elemente in ethe arr");
    scanf("%d",&n);

    printf("enter elemenets int e arr%d\n",n);
    for(i=0;i< n;i++){
        scanf("%d",&arr[i]);

    }  
    min = arr[0];
    max = arr[0];
    
for(i = 1; i < n; i++) { 
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("The minimum element is %d\n", min);
    printf("The maximum element is %d\n", max);

    return 0;
    
}