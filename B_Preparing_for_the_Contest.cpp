#include <iostream>
#include <vector>

using namespace std;

void compute(int num1, int num2)
{
    vector<int> sequence;

    // Incremental part
    for (int i = num1 - num2; i <= num1; i++)
    {
        sequence.push_back(i);
    }

    // Decremental part
    for (int i = num1 - num2 - 1; i >= 1; i--)
    {
        sequence.push_back(i);
    }

    // Print the sequence
    for (int i = 0; i < num1; i++)
    {
        cout << sequence[i] << " ";
    }

    cout << endl;
}

int main()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int num1, num2;
        cin >> num1 >> num2;

        compute(num1, num2);
    }

    return 0;
}
