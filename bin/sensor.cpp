#include <bits/stdc++.h>
using namespace std;

#define DEBUG

int N, sol, tmp, last;

int main() {
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    cin >> N;
    sol = 0;

    for (size_t i = 0; i < N; ++i) {
        cin >> tmp;

        if (tmp == -1)
            tmp = last;
        else
            last = tmp;

        sol += tmp;
    }

    cout << sol << endl;
}
