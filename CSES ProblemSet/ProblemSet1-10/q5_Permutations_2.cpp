#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// All possible permutations as per rule
void constructBeautifilPermutation(int n)
{
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }

    if (n <= 3)
    {
        cout << "No Solution" << endl;
        return;
    }

    vector<int> permutation(n);
    for (int i = 0; i < n; ++i)
    {
        permutation[i] = i + 1;
    }

    do
    {
        bool isBeautiful = true;
        for (int i = 0; i < n - 1; ++i)
        {
            if (abs(permutation[i] - permutation[i + 1]) == 1)
            {
                isBeautiful = false;
                break;
            }
        }

        if (isBeautiful)
        {
            for (int i = 0; i < n; ++i)
            {
                cout << permutation[i] << " ";
            }
            cout << endl;
        }
    } while (next_permutation(permutation.begin(), permutation.end()));
}

int main()
{
    int n;
    cin >> n;

    constructBeautifilPermutation(n);

    return 0;
}