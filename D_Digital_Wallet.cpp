#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    vector<vector<int>> arrays(N, vector<int>(M));
    vector<int> max_values(N);

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> arrays[i][j];
            max_values[i] = max(max_values[i], arrays[i][j]);
        }
    }

    int total_money = 0;

    for (int p = 0; p < M - K + 1; ++p) {
        int max_index = max_element(max_values.begin(), max_values.end()) - max_values.begin();
        int max_value = max_values[max_index];
        
        // Find the index in the chosen array for the operation
        int index = -1;
        for (int i = 0; i < M; ++i) {
            if (arrays[max_index][i] == max_value) {
                index = i;
                break;
            }
        }
        
        total_money += max_value;  // Add the maximum value to the total money
        arrays[max_index][index] = 0;  // Set the chosen element to 0
        
        // Update the maximum value for the chosen array
        max_values[max_index] = *max_element(arrays[max_index].begin(), arrays[max_index].end());
    }

    cout << total_money << endl;

    return 0;
}
