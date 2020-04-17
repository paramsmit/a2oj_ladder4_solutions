#include<iostream>
#include<vector>
#include<algorithm>
#define f(i,a,n) for(int i = a; i<n; i++)
#define fr(i,a,n) for(int i = a; i>=n; i--)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0);

using namespace std;

int main(){
    fastio
    int n; cin>>n;
    vector <int> l(n),r(n);
    int cnt = 0;
    f(i,0,n) cin>>l[i]>>r[i];
    f(i,0,n){
        f(j,0,n){
            if(r[i]==l[j]) cnt++;
        }
    }    

    cout<<cnt<<endl;
}