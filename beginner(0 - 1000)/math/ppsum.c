//Puppy and sum
#include <stdio.h>
#include <math.h>

int sum(int n){
    return n*(n+1)/2;
}


int main()
{
    int t,d,n,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&d,&n);
        for(j=0;j<d;j++){
            n=sum(n);
        }
        printf("%d\n",n);
    }
    return 0;
}

