#include<iostream>
#include<vector>
#include<string>
#include <regex>
using namespace std;

string remVowel(string str) 
{ 
    regex r("[aeiouyAEIOUY]");  
      
    return regex_replace(str, r, ""); 
    
} 
using namespace std;
int main(){
    
    string str;
    cin>>str;
    int n = str.length();
    
    for(int i = 0; i<n; i++){
        str[i] = tolower(str[i]);
    }

    string ans =  remVowel(str);
    for(int i = 0; i<ans.length(); i++){
        cout<<"."<<ans[i];
    }

}