#include<stdio.h>
int add(int a,int b){
    return a+b;
}

int main(){
    int num1=1, num2=2;
    int sum=add(num1,num2);
    printf(" sum =%d\n",sum);
    return 0;

}