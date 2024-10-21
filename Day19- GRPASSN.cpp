#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T; // Read number of test cases
    
    while (T--) {
        int N;
        cin >> N; // Read number of people
        
        vector<int> P(N);
        for (int i = 0; i < N; ++i) {
            cin >> P[i]; // Read each person's preferred group size
        }
        
        // Count occurrences of each preferred group size
        map<int, int> count;
        for (int i = 0; i < N; ++i) {
            count[P[i]]++;
        }
        
        // Check if we can form the groups as required
        bool possible = true;
        for (auto& entry : count) {
            int group_size = entry.first;
            int occurrences = entry.second;
            
            // If the number of people with this preference is not divisible by the group size
            if (occurrences % group_size != 0) {
                possible = false;
                break;
            }
        }
        
        // Output the result for this test case
        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
