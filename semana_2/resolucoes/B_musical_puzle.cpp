#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int testcases;
    cin >> testcases;

    for(int i = 0; i < testcases; i++)
    {
        string melody;
        int melody_size;
        cin >> melody_size;
       
        cin >> melody;
        

        set <string> two_note;
        
        for(int j = 0; j < melody.length() - 1; j++)
        {
            two_note.insert(melody.substr(j, 2));
        }
    cout << two_note.size() << "\n";
    }
    return 0;
}