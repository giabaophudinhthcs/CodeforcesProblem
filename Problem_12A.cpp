#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    string c[3];
    for (int i = 0; i <= 2; ++i) cin >> c[i];
    for (int i = 0; i <= 2; ++i){
        int x = 2, y = 2 - i;
        if (c[0][i] != c[x][y]){
            cout << "NO";
            return 0;
        }
    }
    if (c[1][0] == c[1][2]) cout << "YES";
    else cout << "NO";
    return 0;
}
