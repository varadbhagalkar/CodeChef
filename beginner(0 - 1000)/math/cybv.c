//The Begining Era Of Cyberverse

#include <stdio.h>
#include <math.h>


int main()
{
    int t,n,k,i,temp;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&n,&k);
        temp=k/n;
        if(k - temp*n==0){
            printf("%d",0);
        }
        else{
            printf("%d",1);
        }
    }
    return 0;
}
