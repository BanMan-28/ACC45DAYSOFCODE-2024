#include <iostream>
using namespace std;

int main() {
	int T,N,X;
	cin>>T;
	while(T>0){
	    cin>>N>>X;
	    if(N%X==0)
	        cout<<"YES"<<endl;
	    else if(N%2==0 && X%2==0 || X%2==1)
	    cout<<"YES"<<endl;
	    else 
	    cout<<"NO"<<endl;
	    
	   
	    T--;
	}
	return 0;
}