// This is GOD's workspace.
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define pb push_back
#define ll long long
#define lld long double
#define tt           \
    int testcase;    \
    cin >> testcase; \
    while (testcase--)

int main()
{
    tt
    {
        string s;
        cin >> s;
        int ans = 0, ptr = 1;
        for (int i = 0; i < 4; i++)
        {

            int r = s[i] - '0';
            if ((r != 0 && ptr != 0) || r == 0 && ptr == 0)
                ans += abs(r - ptr);

            else if (ptr == 0)
                ans += abs(10 - r);

            else
                ans += abs(10 - ptr);

            ptr = r;
        }
        cout << ans + 4 << endl;
    }

    return 0;
}