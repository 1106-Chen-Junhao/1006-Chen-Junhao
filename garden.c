//Author: Junhao Chen
//Date: 9/13
#include<stdio.h>
int main(){
    float a;
    char b;
    int c, n;
    printf("Let's plant our garden\n");
    for(n=1; n<4;n++){
        printf("enter the space between the seeds:\n");       
        printf("enter the letter for the type of seed:\n");       
        printf("enter the number of the seed:\n");
        printf("(space per seed,veggie,seeds)\n");
        scanf("%f %c %d",&a,&b,&c);
        printf("the %d row's datevinches:%f, veggie:%c, seeds:%d\n",n,a,b,c);
        printf("\n");
    }
 return 0;
}   



 