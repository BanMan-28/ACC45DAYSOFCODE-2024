#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int limak = 0, bob = 0;
        int counter = 1;
        while ((limak <= a) or (bob <= b))
        {
            limak = limak + counter;
            if (limak > a)
            {
                cout << "Bob" << endl;
                break;
            }
            counter++;
            bob = bob + counter;
            if (bob > b)
            {
                cout << "Limak" << endl;
                break;
            }
            counter++;
        }
    }
    return 0;
}