#include<bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    
    while(testCases--)
    {
        long long side1, side2, point1_x, point1_y, point2_x, point2_y;
        cin >> side1 >> side2 >> point1_x >> point1_y >> point2_x >> point2_y;
        long long count = 0;
        double hypotenuse = side1 * side1 + side2 * side2;
        set<pair<int, int>> points = {{point1_x + side1, point1_y + side2}, {point1_x + side1, point1_y - side2}, {point1_x - side1, point1_y - side2}, {point1_x - side1, point1_y + side2},
                                         {point1_x + side2, point1_y + side1}, {point1_x - side2, point1_y + side1}, {point1_x - side2, point1_y - side1}, {point1_x + side2, point1_y - side1}};
        for (auto it : points) {
            int x = it.first;
            int y = it.second;
            double temp = pow((x - point2_x), 2) + pow((y - point2_y), 2);
            if (temp == hypotenuse) {
                count++;
            }
        }

        cout << count << endl;
    }
}
