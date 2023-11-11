#include <bits/stdc++.h>
using namespace std;

int main () 
{
    int number_1;
    int number_2;
    int squared_sum = 0;

    cin >> number_1;
    cin >> number_2;

    for(int i = number_1; i<number_2 + 1; i++)
    {
        squared_sum += pow(i, 2);
    }
    cout << squared_sum << endl;

    return 0;
}