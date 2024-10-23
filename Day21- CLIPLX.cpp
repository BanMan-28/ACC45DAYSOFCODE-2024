#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t,x,y;
cin>>t;
while(t--){
    cin>>x>>y;
    if(x<=y)
    cout<<0<<endl;
    else if(x%y ==0){
        cout<<y<<endl;
    }
    else{
        int s;
        s= (x%y);
        cout<<s<<endl;
    }
}
}
