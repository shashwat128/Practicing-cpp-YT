#include <iostream>
#include <vector>
using namespace std;

// 1 permutation only, the first one.
vector<int> constructBeautifulPermutation(int n)
{
    vector<int> permutation;

    // Handle the case when n is 1
    if (n == 1)
    {
        permutation.push_back(1);
        return permutation;
    }

    // Construct permutation
    for (int i = 2; i <= n; i = i + 2)
    {
        permutation.push_back(i);
    }

    for (int i = 1; i <= n; i = i + 2)
    {
        permutation.push_back(i);
    }

    return permutation;
}

int main()
{
    int n;
    cin >> n;

    vector<int> beautifulPermutation = constructBeautifulPermutation(n);

    // Output the permutation
    if (beautifulPermutation.empty())
    {
        cout << "No solution." << endl;
    }
    else
    {
        for (int i : beautifulPermutation)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}