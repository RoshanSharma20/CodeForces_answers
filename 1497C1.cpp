#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int n, k;
        cin >> n >> k;
        if (n % 2 == 0)
        {
            if (n % 4 == 0)
            {
                cout << (n / 2) << " " << (n / 4) << " " << (n / 4) << endl;
            }
            else
            {
                cout << 2 << " " << (n / 2) - 1 << " " << (n / 2) - 1 << " " << endl;
            }
        }
        else
        {
            cout << (n / 2) << " " << (n / 2) << " " << 1 << endl;
        }
    }
    return 0;
}