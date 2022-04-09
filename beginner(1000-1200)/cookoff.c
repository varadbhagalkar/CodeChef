//Chef and Cook-Off Contests
#include <stdio.h>
int main()
{
    char str[12];
	int t, n;
	scanf("%d", &t);
	while(t--)
	{
	    int a[]={0, 0, 0, 0, 0};
		scanf(" %d", &n);
		while(n--)
		{
            scanf("%s", str);
            if(strcmp(str,"cakewalk")==0) {a[0]++;}
            else if(strcmp(str, "simple")==0) {a[1]++;}
            else if(strcmp(str, "easy")==0) {a[2]++;}
            else if(strcmp(str, "easy-medium")==0) {a[3]++;}
            else if(strcmp(str, "medium")==0) {a[3]++;}
            else if(strcmp(str, "medium-hard")==0) {a[4]++;}
            else if(strcmp(str, "hard")==0) {a[4]++;}
		}
		if(a[0]>0&&a[1]>0&&a[2]>0&&a[3]>0&&a[4]>0)
		printf("Yes\n");
        else
        printf("No\n");
	}
	return 0;
}