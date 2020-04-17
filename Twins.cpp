//https://codeforces.com/problemset/problem/160/A
//cout<<author; 
//paramsmit sanghani
#include<iostream>
#include<string>
#include<vector>
#include<numeric>
#include<algorithm>
#define endl "\n"

using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> x(n);
    for(int i = 0; i<n; i++)cin>>x[i];
    sort(x.begin(),x.end(),greater<>());
    int totsum = accumulate(x.begin(), x.end(), 0); 
    int i = 0, sum = 0;
    while (i<n && sum<=totsum-sum){
        sum = sum + x[i];
        i++;
    }
    cout<<i<<endl;
}