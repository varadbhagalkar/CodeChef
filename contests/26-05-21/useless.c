#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,i,j,n,cur,prev;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        for(j=0;j<n;j++){
            cin>>cur;
            if(j==0){
                prev=cur;
                continue;
            }
            else{
                if(cur<prev){
                    cout<<"No"<<endl;
                    break;
                }
                else if(j==(n-1)){
                    cout<<"Yes"<<endl;
                }
                prev=cur;
            }
        }
    }
    return 0;
}
