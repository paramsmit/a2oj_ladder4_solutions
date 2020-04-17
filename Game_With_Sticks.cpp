//https://codeforces.com/problemset/problem/451/A
#include<iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <math.h>
#include <cmath>
#include<vector>
#include<algorithm>
#include<string>
#include<set>
#include<map>
#define f(i,a,n) for(int i = a; i<n; i++)
#define fr(i,a,n) for(int i = a; i>=n; i--)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0);

using namespace std;

int main(){
    fastio int n,m;cin>>n>>m;
    if(min(n,m)%2==0)cout<<"Malvika"<<endl;
    else cout<<"Akshat"<<endl;
}