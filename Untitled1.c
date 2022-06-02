#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main()
{
    int a;
    int howmany;
    int maxtimes = 20;
    printf("Enter how many times:");
    scanf("%d", &howmany);
    for(a=1; a<= maxtimes; a++){
        printf("%d Gadidesi Vivek\n",a);
    if(a==howmany){
    break;}
    }


   return 0;
}


