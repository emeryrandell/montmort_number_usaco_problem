#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    long long M;
    cin >> N >> M;

    vector<long long> d(N + 1, 0);

    if (N >= 2) d[2] = 1 % M;

    for (int i = 3; i <= N; i++) {
        d[i] = ((i - 1LL) * ((d[i - 1] + d[i - 2]) % M)) % M;
    }

    for (int i = 1; i <= N; i++) {
        if (i > 1) cout << " ";
        cout << d[i];
    }

    cout << '\n';
}
