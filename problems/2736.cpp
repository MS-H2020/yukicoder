#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
    int Alice, Bob;
    cin >> Alice >> Bob;
    
    if(Alice*2 < Bob || Bob*2 < Alice ) cout << "No" << '\n';
    else cout << "Yes" << '\n';
    
    return 0;
}
