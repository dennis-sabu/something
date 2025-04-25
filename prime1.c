#include<stdio.h>
float pro(float a,int b){
    return a*b;
}
int main(){
    printf("Enter 2 numbers");
    float n1,product;
    int n2;

    scanf(" %f %d",&n1,&n2);
    product=pro(n1,n2);
    printf("Product is %d",product); 
    return 0;   

}