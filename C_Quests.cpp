#include <bits/stdc++.h>
using namespace std;

#define NEWLINE '\n'
#define LONG long long
const int MODULO = 1e9 + 7;
#define ARRAY_SIZE 200005

template<typename T>
void solveFunction() {
    int duration, limit;
    cin >> duration >> limit;

    static T firstArray[ARRAY_SIZE];
    static T secondArray[ARRAY_SIZE];
    static T thirdArray[ARRAY_SIZE];

    for (int i = 0; i < duration; i++) {
        cin >> firstArray[i];
    }

    for (int i = 0; i < duration; i++) {
        cin >> secondArray[i];
    }

    thirdArray[0] = secondArray[0];
    for (int i = 1; i < duration; i++) {
        thirdArray[i] = (thirdArray[i - 1] > secondArray[i]) ? thirdArray[i - 1] : secondArray[i];
    }

    LONG result = 0;
    LONG total = 0;
    for (int i = 0; i < (limit < duration ? limit : duration); i++) {
        total += firstArray[i];
        LONG remaining = limit - (i + 1);
        LONG current = total + remaining * thirdArray[i];

        result = (result > current) ? result : current;
    }

    cout << result << NEWLINE;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int numberOfTestCases;
    cin >> numberOfTestCases;

    while (numberOfTestCases--) {
        solveFunction<int64_t>();
    }

    return 0;
}
