//https://codeforces.com/problemset/problem/263/A
#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector <vector <int>> x(5,vector<int>(5));
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin>>x[i][j];
            if(x[i][j]==1){
                cout<<abs(3-(i+1)) + abs(3-(j+1))<<endl;
                exit(0);
            }
        }
    }
}