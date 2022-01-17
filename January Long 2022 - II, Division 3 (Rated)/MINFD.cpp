#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int sum = 0;
        int count = 0;
        int currsum = 0;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            v.push_back(k);
            sum += k;
        }
        if (sum < x)
        {
            cout << -1 << endl;
            continue;
        }
        sort(v.rbegin(), v.rend());
        for (int i = 0; i < n; i++)
        {
            currsum += v[i];
            count++;
            if (currsum >= x)
            {
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}
