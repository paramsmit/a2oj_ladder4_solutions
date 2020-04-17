#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<climits> 
#define f(i,a,n) for(int i = a; i<n; i++)
#define fr(i,a,n) for(int i = a; i>=n; i--)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0);

using namespace std;

int main(){
    
    int n,m; cin>>n>>m;
    vector <int> puzzles(m);
    f(i,0,m) cin>>puzzles[i];
    sort(puzzles.begin(),puzzles.end());   
    
    int minm = INT_MAX, i = 0;
    while(i<m-n+1){
        minm=min(minm,puzzles[i+n-1]-puzzles[i]);
        i++;
    }

    cout<<minm<<endl;
}