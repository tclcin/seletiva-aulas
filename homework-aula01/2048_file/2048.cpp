#include <bits/stdc++.h>
#include <set>
using namespace std;

bool query_2048(int number_of_elements){
    
    bool is_winnable = false;
    
    
    vector <int> gameset;
    for(int j = 0; j < number_of_elements; j++){
        int number;
        cin >> number;
        
        gameset.push_back(number);
    }
    


    int set_sum = 0;
    for(auto number:gameset){  
        if(number <= 2048) set_sum += number ;     
    }
    
    if(set_sum >= 2048) is_winnable = true;
    else is_winnable = false;

    return is_winnable;
}


int main() {
    int number_of_queries;
    cin >> number_of_queries;

    for(int i = 0; i < number_of_queries; i++){
        int number_of_elements;
        cin >> number_of_elements;
        if(query_2048(number_of_elements) == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
