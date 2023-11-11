#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_cases;

    cin >> test_cases;

    for(int i = 0; i < test_cases; i++)
    {
        int64_t number;
        cin >> number;

        if(not __has_single_bit(number)) cout << "YES" << endl;
        else cout << "NO" << endl;
}

    return 0;
}

