//https://codeforces.com/problemset/problem/58/A

#include<iostream>
#include<string>
#include<vector>
#include<numeric>
#include<algorithm>
#define endl "\n"

using namespace std;
int main(){
    
    string s, s2="hello";
    
    getline(cin,s);
    int n=s.length();
    
    int j=0,count=0,i=0;

    while(i<n && j<5 && count<6){
        
        if(s[i]==s2[j]){
            i++;j++;
            count++;
        }else{
         i++;   
        }    
    
    }

    if(count==5)
        cout<<"YES"<<endl;
    else
    {
        cout<<"NO"<<endl;
    }
    

}    




     

