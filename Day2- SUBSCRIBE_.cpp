#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int n,x,gr;
	    cin>>n>>x;
	    if(n%6==0){
	        gr=(n/6);
	    }
	    else
	    gr=(n/6)+1;
	   
	    int out;
	out= gr*x;
	cout<<out<<endl;
	}

}
