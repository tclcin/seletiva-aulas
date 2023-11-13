#include <bits/stdc++.h>
using namespace std;

int query_2048(int number_of_elements){
    multiset <int> gameset;
    for(int j = 0; j < number_of_elements; j++){
        int number;
        cin >> number;
        
        gameset.insert(number);
    }
    for(auto number:gameset){
        cout << number << endl;
    }
}


int main() {
    int number_of_queries;
    cin >> number_of_queries;

    for(int i = 0; i < number_of_queries; i++){
        int number_of_elements;
        cin >> number_of_elements;
        query_2048(number_of_elements);
    }
    return 0;
}
