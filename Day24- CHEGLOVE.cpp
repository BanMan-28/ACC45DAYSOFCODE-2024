#include<bits/stdc++.h>
#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int N;
	    cin>>N;
	    vector<int>finger(N);
	    vector<int>sheath(N);
	    for(auto &i:finger)
	    cin>>i;
	    for(auto &i:sheath)
	    cin>>i;
	    
	    int count=0,count1=0;
	    for(int i=0;i<N;i++){
	        if(sheath[i]>=finger[i])
	        count++;
	    }
	    reverse(finger.begin(),finger.end());
	    for(int i=0;i<N;i++){
	        if(sheath[i]>=finger[i])
	        count1++;
	    }
	    
	    if(count==N && count1==N)
	    cout<<"both"<<endl;
	    else if(count==N && count1!=N)
	    cout<<"front"<<endl;
	    else if(count!=N && count1==N)
	    cout<<"back"<<endl;
	    else
	    cout<<"none"<<endl;
	    
	}
	return 0;
}