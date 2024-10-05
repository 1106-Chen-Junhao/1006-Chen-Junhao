//author: Junhao Chen
//date: 9/18
#include<stdio.h>
int main(){
    int expiremonth,totaldays_inmonth1,expireday,expireyear,totaldays1;
    int daysinmonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
    printf("please enter the expiration date(mm/dd/yyyy)\n");
    scanf("%d/%d/%d",&expiremonth,&expireday,&expireyear);
    for(int i= 0; i<expiremonth-1;i++){
    totaldays_inmonth1 +=daysinmonth[i];
}
    int currentmonth,totaldays_inmonth2,currentday,currentyear,totaldays2;
    totaldays1=expireyear*365+expireday+totaldays_inmonth1-1;
    printf("please enter the current date(mm/dd/yyyy)\n");
    scanf("%d/%d/%d",&currentmonth,&currentday,&currentyear);
    for(int i=0; i<currentmonth-1;i++){
    totaldays_inmonth2 +=daysinmonth[i];
    }
    totaldays2=currentyear*365+currentday+totaldays_inmonth2;
    if(totaldays2>=totaldays1){
        printf("Nooooo don't eat it! It's expired!\n");
    }
    else{
    printf("%d days until that food is going to try to murder you.\n",totaldays1-totaldays2);
    }
    return 0;
}
