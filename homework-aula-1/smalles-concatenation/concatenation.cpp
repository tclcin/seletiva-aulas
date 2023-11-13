#include <bits/stdc++.h>

using namespace std;

bool LexCompare(string str1, string str2) {
    return (lexicographical_compare(str1.begin(), str1.end(), str2.begin(), str2.end()));
}
bool Lencompare(string str1, string str2){
    return (str1.size() > str2.size())
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int number_of_strings;
    cin >> number_of_strings;

    vector <string> abc_strings;

    for(int i = 0; i < number_of_strings; i++){
        string abc;
        cin >> abc;

        abc_strings.push_back(abc);
    }   

    sort(abc_strings.begin(), abc_strings.end(), LexCompare);

    string sorted_concatenation = "";
    for(auto abc_string:abc_strings){
        sorted_concatenation += abc_string;
    }
    cout << sorted_concatenation << "\n";
    return 0;
}