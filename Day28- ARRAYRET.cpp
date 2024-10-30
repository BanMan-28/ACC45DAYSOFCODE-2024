#include <bits/stdc++.h>
using namespace std;

int main() {
    int t , n ;
    cin >> t ;
    while ( t-- )
    {
        cin >> n ;
        long a[n] ;
        long sum = 0 ;
        for ( int i = 0 ; i < n ; i++ )
        {
            cin >> a[i] ;
            sum += a[i] ;
        }
        long main_sum = sum / ( n + 1 ) ;

        long b[n] ;
        for ( int i = 0 ; i < n ; i++ )
        {
            long temp = main_sum - a[i] ;
            if ( temp < 0 )
            {
                temp *= -1 ;
            }

            b[i] = temp ;
            cout << b[i] <<" ";
        }
        cout << endl ;


    }
}