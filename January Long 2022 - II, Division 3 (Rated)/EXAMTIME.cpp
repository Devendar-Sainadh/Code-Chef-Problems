#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int d1, d2, d3, s1, s2, s3, sum1, sum2;
        cin >> d1 >> d2 >> d3;
        cin >> s1 >> s2 >> s3;
        sum1 = d1 + d2 + d3;
        sum2 = s1 + s2 + s3;
        if (sum1 > sum2)
        {
            cout << "DRAGON";
        }
        else if (sum2 > sum1)
        {
            cout << "SLOTH";
        }
        else
        {
            if (d1 > s1)
            {
                cout << "DRAGON";
            }
            else if (d1 < s1)
            {
                cout << "SLOTH";
            }
            else
            {
                if (d2 > s2)
                {
                    cout << "DRAGON";
                }
                else if (d2 < s2)
                {
                    cout << "SLOTH";
                }
                else
                {
                    cout << "TIE";
                }
            }
        }
    }
    return 0;
}
