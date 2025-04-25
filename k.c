#include<stdio.h>
int main(){
    int a,b;
    char op;
    printf("Enter 2 numbers");
    scanf("%d%d",&a ,&b);
    printf("welect the operator (+,-,*,/): ");
    scanf("&c",&op);
    switch(op)
    {
        case '+':
            printf("%d + %d = %d",a,b,a+b);
            break;
        case '-':
            printf("%d - %d = %d",a,b,a-b);

            break;

        case '*':
            printf("%d * %d = %d",a,b,a*b);
            break;
        case '/':
            printf("%d / %d = %d",a,b,a/b);
            break;
        default:
            printf("invalid operator");
            break;

        


        
    }
    return 0;
}