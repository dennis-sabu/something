#include<stdio.h>
void decimal(int num){
    if(num==0)
    return;
    decimal(num/2);
    printf("%d",num % 2);

}
void main(){
    int num;

    printf("Enter a positive interger: ");
    scanf("%d", &num);

    printf("binery equalent: ");
    if(num==0)
    printf("0");
else
    decimal(num);

}