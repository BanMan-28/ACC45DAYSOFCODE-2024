#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while ( t-- ){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        for ( int i =0; i < n; i++){
            for ( int j = i+1; j < n; j++){
                if ( s[i] == s[j]){
                    count += 1; 
                }
                else {
                    continue;
                }
            }
        }
        if ( count == 0){
            cout << -1 << endl;
        }
        else {
            cout << n - 2 << endl;
        }
    }
}