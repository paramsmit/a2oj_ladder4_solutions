#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string str,ans;
        getline(cin,str);
        int n = str.length();
    
        if(n<=10){
            cout<<str<<endl;
        }
    
        else{
            ans.push_back(str[0]);
            ans.append(to_string(n-2));
            ans.push_back(str[n-1]);
            cout<<ans<<endl;
        }
    }
}