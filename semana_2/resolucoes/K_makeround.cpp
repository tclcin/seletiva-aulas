#include <bits/stdc++.h>

using namespace std;

int factors_of_n(int price, int n)
{
    int num_factors = 0;
    while(price % n == 0)
    {
        num_factors += 1;
        price = price /n;
    }
    return num_factors;
}



int number_of_digits(int integer)
{
    int integer_cp;

    int k = 1;
    while(integer_cp >= 1)
    {
        if 
    }
}

int max_10(max )

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int testcases; 
    cin >> testcases;
    for(int i = 0; i < testcases; i++){
        int old_price;
        int max_inflation;

        cin >> old_price;
        cin >> max_inflation;

        int factors_of_2 = factors_of_n(old_price, 2);
        int factors_of_5 = factors_of_n(old_price, 5);
        
        if(factors_of_2 > factors_of_5) cout << max_factor_of_n(max_inflation, 5, 2, factors_of_2) * old_price << "\n";
        else if (factors_of_5 > factors_of_2) cout << max_factor_of_n(max_inflation, 2, 5, factors_of_5) * old_price << "\n";
        else cout << max_inflation * old_price << "\n";
    }
}