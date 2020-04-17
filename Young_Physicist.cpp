#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#define f(i,a,n) for(int i = a; i<n; i++)
#define fr(i,a,n) for(int i = a; i>=n; i--)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0);

using namespace std;

int main(){
    
    fastio
    int n; cin>>n;
    vector <int> x(n),y(n),z(n);
    f(i,0,n){
        cin>>x[i]>>y[i]>>z[i];
    }

 
    if(accumulate(x.begin(), x.end(), 0)==0 &&  accumulate(y.begin(), y.end(), 0)==0 && accumulate(z.begin(), z.end(), 0)==0){
        cout<<"YES"<<endl;
    }

    else{
        cout<<"NO"<<endl;
    }

}