#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,x,y,z,i;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>x>>y>>z;
        if(y>=x){
            cout<<0<<endl;
        }else{
            cout<<(x-y)*z<<endl;
        }
    }
    return 0;
}
