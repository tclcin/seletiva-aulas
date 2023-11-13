#include <bits/stdc++.h>
using namespace std;


int main() {

    bool receiving_inputs_dict = true;
    map <string, string> dictionary;


    while(receiving_inputs_dict){
        string word_translation_pair;
        getline(cin, word_translation_pair);
        stringstream ss(word_translation_pair);       


        vector <string> dict_vector;

        if (word_translation_pair.empty()) receiving_inputs_dict = false;
       
        else{
            while(getline(ss, word_translation_pair, ' ')) dict_vector.push_back(word_translation_pair);


            string translation = dict_vector[0];
            string foreign_word = dict_vector[1];

            dictionary[foreign_word] = translation;
        }
    }

    bool receiving_inputs_message = true;


    while(receiving_inputs_message) {
        string message;
        getline(cin, message);

        if(message.empty()) receiving_inputs_message = false;
        
        else {
            if(dictionary[message].empty()) cout << "eh" << endl;
            else cout << dictionary[message] << endl;
        }
    }
}


