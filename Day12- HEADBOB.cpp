#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int ns=1;
	    for(int i=0;i<n;i++){
	        if(s[i]=='Y'){
	            cout<<"NOT INDIAN"<<endl;
	            ns=0;
	            break;	        
	        }
	        else if(s[i]=='I'){
	            cout<<"INDIAN"<<endl;
	            ns=0;
	            break;	        
	        }
             
             
	    }
	    if(ns==1)cout<<"NOT SURE"<<endl;
	    
	}
	return 0;

}