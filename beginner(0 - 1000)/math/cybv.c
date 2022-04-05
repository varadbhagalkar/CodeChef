//The Begining Era Of Cyberverse


#include <stdio.h>
#include <math.h>


int main()
{
    int t,n,k,i,temp,arr[100000];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&n,&k);
        temp=k/n;
        if(k - temp*n==0){
            arr[i]=temp;
        }
        else{
            arr[i]=temp;
        }
    }
    for(i=0;i<t;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
