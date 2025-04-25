#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100],str2[100];
    printf("Enter 2 strings\n");
    fgets(str1,sizeof(str1), stdin);
    fgets(str2,sizeof(str2), stdin);


    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (strcmp(str1,str2)==0){
        printf("strings are equel\n");
    }
    else{
        printf("The strings are not equal\n");

    }
return 0;


//rynner.prototype.gameOver = () =>{}


}