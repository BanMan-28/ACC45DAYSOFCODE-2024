#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    a= a*10;
    b= b*5;
    if(a>b){
        cout<<"FIRST"<<endl;
    }
    else if(a==b)
    cout<<"ANY"<<endl;
    
    else
    cout<<"SECOND"<<endl;
    
}
}
