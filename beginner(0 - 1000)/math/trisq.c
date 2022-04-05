//Fit Squares in Triangle


#include <stdio.h>
#include <math.h>


int main()
{
    int t,b,i,res[1000],calc;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&b);
        calc=b/2 - 1;
        res[i]=calc*(calc + 1)/2;
    }
    for(i=0;i<t;i++){
        printf("%d\n",res[i]);
    }

    return 0;
}
