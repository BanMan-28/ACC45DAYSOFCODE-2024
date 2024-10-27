#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    long long int t,n,x,c,y;
    cin>>t;
    while(t--){
        c=0;
        cin>>n;
        long long int l[n];
        for(int i=0;i<n;i++){
            cin>>x;
            l[i]=x;
        }
        for(int j=0;j<n-1;j++){
            if(l[j+1]>l[j]){
                y=l[j+1]-l[j]-1;
                c+=y;
            }   
            else{
                y=l[j]-l[j+1]-1;
                c+=y;
            }    
        }
        cout<<c<<endl;
    }
}