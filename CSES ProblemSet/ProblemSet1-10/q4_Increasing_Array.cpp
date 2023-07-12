#include <iostream>
using namespace std;

#define ll long long

int main()
{
    int n;
    cin >> n;
    int maxEle = 0;
    ll moves = 0;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        maxEle = max(x, maxEle);
        moves = moves + maxEle - x;
    }

    cout << moves;
}