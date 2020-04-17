//https://codeforces.com/problemset/problem/136/A
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> x (n);
    vector <int> r (n);
    for(int i = 0; i<n; i++){
        cin>>x[i];
        r[x[i]-1]=i+1;
    }

    for(int i = 0; i<n; i++){
        cout<<r[i]<<" ";
    }
    
}