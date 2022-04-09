//Ciel and Receipt
#include<stdio.h>


int main(){
    int t,p,i,inc,count,flag;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&p);
        flag=0;
        count=0;
        if(p>2048){
            flag=p/2048;
            p=p-(2048*flag);
        }
        while(p!=0){
            count+=p%2;
            p=p/2;
        }
        if(flag>0){
            count=count+flag;
        }
        printf("%d\n",count);
    }
    return 0;
}