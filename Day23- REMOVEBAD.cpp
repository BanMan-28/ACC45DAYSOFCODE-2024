#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int T;
    cin >> T;  

    while (T--) {
        int N;
        cin >> N;  

        unordered_map<int, int> freq;  
        for (int i = 0; i < N; ++i) {
            int x;
            cin >> x;  
            freq[x]++;  
        }
        int max_frequency = 0;
        for (const auto& entry : freq) {
            if (entry.second > max_frequency) {
                max_frequency = entry.second; 
            }
        }
        int operations = N - max_frequency;  
        cout << operations << endl;  
    }

    return 0;
}