#include <stdio.h>

int main()
{
    int t,n,k,i,temp;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&n,&k);
        temp=n/k;
        if(temp*k==n){
            printf("%d\n",temp);
        }else{
            printf("%d\n",-1);
        }
    }
    return 0;
}
