#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        int maxi = INT_MIN;
        int sum = x;
        for(int i=0;i<n;i++)
        {
            maxi = max(maxi,sum);
            sum += a[i];
        }
        maxi = max(maxi,sum);
        cout << maxi << endl;
    }
}