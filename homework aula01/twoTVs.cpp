#include <bits/stdc++.h>
using namespace std;

int main() 
{

    // Criando vetor com os tempos de inicio e fim de cada programa
    int number_of_shows;
    cin >> number_of_shows;

    vector <int> start_times;
    vector <int> end_times;

    
    for(int i = 0; i < number_of_shows; i++)
    {
        int start_time;
        int end_time;
        
        cin >> start_time;
        cin >> end_time;

        start_times.push_back(start_time);
        end_times.push_back(end_time);
    }
    
    for(int i = 0; i < number_of_shows; i++)
    {
        
    }
    

    return 0;
}