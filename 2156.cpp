#include <iostream>
#include <algorithm>
using namespace std;

int dp[10001];
int wine[10001];

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> wine[i];
    }
    dp[1] = wine[1];
    dp[2] = wine[2] + wine[1];
    for(int i = 3; i <= n; i++) {
        dp[i] = max({dp[i - 2] + wine[i], dp[i - 3] + wine[i - 1] + wine[i], dp[i - 1]}); // ???oxo / ???xoo / ???oox
    }
    cout << dp[n] << '\n';
    return 0;
}
