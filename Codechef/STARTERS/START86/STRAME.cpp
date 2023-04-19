// https://www.codechef.com/viewsolution/94791825

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

string winner(string S) {
    int n = S.length();
    bool zlatan_turn = true;
    while (n > 1) {
        bool found = false;
        for (int i = 0; i < n-1; i++) {
            if (S[i] != S[i+1]) {
                S.erase(i, 2);
                n -= 2;
                found = true;
                break;
            }
        }
        if (!found) {
            break;
        }
        zlatan_turn = !zlatan_turn;
    }
    return zlatan_turn ? "Ramos" : "Zlatan" ;
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string S;
        cin >> S;
        cout << winner(S) << endl;
    }
    return 0;
}
