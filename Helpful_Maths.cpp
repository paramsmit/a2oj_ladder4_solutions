//https://codeforces.com/problemset/problem/339/A
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define endl "\n"

using namespace std;

int main(){
    
    string x , y="" ;
    getline(cin,x);
    int n = x.length();
    sort(x.begin(),x.end());
    
    int i = 0;
    
    while(i<n){
        while(x[i]=='+')i++;
        while(i<n-1){
            y.push_back(x[i]);
            y.push_back('+');
            i++;
        }
        
        y.push_back(x[i]);
        i++;
    }
    
    
    cout<<y<<endl;

    
}