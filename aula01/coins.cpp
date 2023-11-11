#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int testcases;
    int n;
    int k;
    cin >> testcases;
    
    for(int i = 0; i < testcases; i++)
    {
        cin >> n;
        cin >> k;

        if(n % 2 != 0 and (k > n or k % 2 == 0)) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}