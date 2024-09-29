#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a[3],b[3];
	    int sum_dragon=0,sum_sloth=0;
	    for(int i=0; i<3;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0; i<3;i++)
	    {
	        cin>>b[i];
	    }
	    for(int i=0; i<3; i++)
	    {
	        sum_dragon+=a[i];
	        sum_sloth+=b[i];
	    }
	    if(sum_dragon>sum_sloth)
	    {
	        cout<<"DRAGON"<<endl;
	    }
	    else if(sum_sloth>sum_dragon)
	    {
	        cout<<"SLOTH"<<endl;
	    }
	    else
	    {
	            if(a[0]>b[0])
	            {
	                cout<<"DRAGON"<<endl;
	            }
	            else if(a[0]<b[0])
	            {
	                cout<<"SLOTH"<<endl;
	            }
	            else
	            {
	                
	                    if(a[1]>b[1])
	                    {
	                        cout<<"DRAGON"<<endl;
	                    }
	                    else if(a[1]<b[1])
	                    {
	                        cout<<"SLOTH"<<endl;
	                    }
	                    else
	                    {
	                        
	                            if(a[2]>b[2])
	                            {
	                                cout<<"DRAGON"<<endl;
	                            }
	                            else if(a[2]<b[2])
	                            {
	                                cout<<"SLOTH"<<endl;
	                            }
	                            else 
	                            {
	                                cout<<"TIE"<<endl;
	                            }
	                        
	                    }
	                
	            }
	        
	    }
	}
	return 0;
}