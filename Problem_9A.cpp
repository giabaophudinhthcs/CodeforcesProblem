#include <bits/stdc++.h>

using namespace std;

int main(){
    int y, w;
    cin >> y >> w;
    int a = max(y, w);
    if (a == 1){
        cout << "1/1";
    }else{
        int b = 7 - a, c = 6;
        int d = __gcd(b, c);
        b /= d;
        c /= d;
        cout << b << "/" << c;
    }
    return 0;
}
