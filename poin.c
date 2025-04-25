#include<stdio.h>
int evenOrodd(int n){
    if (n%2==0){
        printf("%d is even\n",n);
    }
        else{
            printf("%d is odd\n",n);
        }
}
int main(){
    printf("Enter a number: ");
    int n;
    scanf("%d",&n);
    evenOrodd(n);
    return 0;
}