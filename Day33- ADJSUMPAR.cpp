#include <iostream>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--)
{
 int n,x;
 char c='e';
cin>>n;
while(n--)
{
cin>>x;
if(x&&n)
c=c=='e'?'o':'e';
else
c=c;
}
if(c=='e'&&x==0)
cout<<"yes";
else if(c=='o'&&x)
cout<<"yes";
else
cout<<"no";
cout<<endl;
}
	return 0;
}
