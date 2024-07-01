#include <bits/stdc++.h>

using namespace std;

int minimum_time_to_process_requests(int n, vector<int>& cache) {
    int m = cache.size();
    unordered_map<int, vector<int>> service_requests;
    for (int i = 0; i < m; ++i) {
        service_requests[cache[i]].push_back(i);
    }

    vector<int> time_taken(n + 1, 0);

    for (int service = 1; service <= n; ++service) {
        time_taken[service] += service_requests[service].size();
    }

    int non_cached_requests = m - accumulate(service_requests.begin(), service_requests.end(), 0,
        [](int sum, const pair<int, vector<int>>& p) {
            return sum + p.second.size();
        });

    for (int i = 0; i < non_cached_requests; ++i) {
        time_taken[(i % n) + 1] += 2;
    }

    return *max_element(time_taken.begin(), time_taken.end());
}

int main() {
    int n = 4;
    int m = 6;
    vector<int> cache = {3, 3, 1, 4, 2, 1};

    int result = minimum_time_to_process_requests(n, cache);
    cout << "Minimum time to process all requests: " << result << endl;

    return 0;
}
