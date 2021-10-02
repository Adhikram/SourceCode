#include <bits/stdc++.h>
using namespace std;

string simple(string s, int k)
{
    if (k % 26 == 0)
        return s;
    for (int i = 0; i < s.size(); i++)
    {
        int c = ((s[i] - 'A') - k + 26) % 26 + 'A';
        s[i] = char(c);
    }
    return s;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    freopen("../error.txt", "w", stderr);
#endif
    string t;
    cin >> t;
    int k;
    cin >> k;

    cout << simple(t, k) << endl;
    return 0;
}