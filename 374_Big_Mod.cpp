#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
void solve(long long a,long long b,long long c){
    long long x = 1,y=a;
    while(b>0){
        if(b%2==1){
            x = (x*y)%c;
        }
         y = (y*y)%c;
         b = b/2;
    }
    
    cout<<x%c<<nn;
}

int main()
{
    fastio();    
    int a,b,c;
    while(cin>>a>>b>>c){
        solve(a,b,c);
    }

    return 0;
}
