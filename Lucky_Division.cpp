//https://codeforces.com/problemset/problem/122/A
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
    vector <int> lucky_nums = {4,7,47,74,77,44,777,444,447,474,477,744,774,747};   
    int k = lucky_nums.size();
    for(int i = 0; i<k; i++){
        if(n%lucky_nums[i]==0){
            cout<<"YES"<<endl;
            exit(0);
            }
    }
    cout<<"NO"<<endl;
}
