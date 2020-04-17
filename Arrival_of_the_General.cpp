//https://codeforces.com/problemset/problem/144/A
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define f(i,a,n) for(int i = a; i<n; i++)
#define fr(i,a,n) for(int i = a; i>=n; i--)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0);

int main(){
    
    fastio
    int n,idmax,idmin;
    cin>>n;
    int x[n];
    f(i,0,n)cin>>x[i];

    int maxm = *max_element(x,x+n);
    int minm = *min_element(x,x+n);
    f(i,0,n){
        if(x[i]==maxm){
            idmax = i;
            break;
        }
    }
    
    fr(i,n-1,0){
        if(x[i]==minm){
            idmin = i;
            break;
        }

    }

    int ans = idmax + n-1-idmin;
    if(idmax>idmin)ans--;
    cout<<ans<<endl;


}