#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int desired_bacteria;
    int count = 0;
    cin >> desired_bacteria;
    int remaining_bacteria = desired_bacteria;

    
    int k_max;

    while(remaining_bacteria > 0)
    {
        k_max = 1;
        while(k_max <= remaining_bacteria)
        {
            k_max *= 2;

        }
        
        k_max = k_max/2;
        
        remaining_bacteria -= k_max;

        count +=1;
    }
    
    
    cout << count << "\n";
}