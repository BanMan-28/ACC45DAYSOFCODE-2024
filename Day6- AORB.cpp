#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
          int result,res;
        
            result = ((500 - (2 * a)) + (1000 - (4 * (a + b))));
         
        
            res = ((500 - (2 * (a + b))) + (1000 - (4 * b)));
        if(result>res){
            cout<<result<<endl;
        }
        else{
        cout << res << endl;
        }
    }
}