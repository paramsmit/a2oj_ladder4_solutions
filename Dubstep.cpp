#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#define f(i,a,n) for(int i = a; i<n; i++)
#define fr(i,a,n) for(int i = a; i>=n; i--)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0);

using namespace std;

int main(){
    string s;
    int i=0;
    getline(cin,s);
    while(i<s.length()){    
        
        if(s.substr(i,3) == "WUB"){            
            s.erase(i,3); 
            if(i!=0){
                s.insert(i," ");      // if first is wub then no space
                i++;
            }
            
            while(s.substr(i,3)=="WUB"){   // for recurring wub's so we dont put the space
                s.erase(i,3);
            }   
        }

        else{
            i++;
        }   
    
    }      

    cout<<s<<endl;    
}