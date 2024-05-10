#include <iostream>
#include <vector>

std::vector<int> solve(int a, int b, int c) {
    std::vector<int> res(3, 0);
    if ((a + b + c) % 2 == 1) {
        if (a % 2 != 0) res[0] = 1;
        if (b % 2 != 0) res[1] = 1;
        if (c % 2 != 0) res[2] = 1;
    }
    else{
        if (a % 2 == 0) res[0] = 1;
        if (b % 2 == 0) res[1] = 1;
        if (c % 2 == 0) res[2] = 1;
    }
    return res;
}

int main() {
    int t;
    //std::cout << "Enter the number of test cases: ";
    std::cin >> t;

    while (t--) {
        int a, b, c;
        
        std::cin >> a >> b >> c;

        std::vector<int> res = solve(a, b, c);
        std::cout << res[0] << " " << res[1] << " " << res[2] << "\n";
    }

    return 0;
}
