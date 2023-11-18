#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int testcases;
    cin >> testcases;

    for(int i = 0; i < testcases; i++)
    {
        int number_of_pit_stops;
        cin >> number_of_pit_stops;
        int count = 0;
        vector <pair<int, int>> all_pit_stops;

        for(int j = 0; j < number_of_pit_stops; j++)
        {
            int distance_town_stop;
            int available_fuel;

            pair <int, int> single_pit_stop;
            
            cin >> distance_town_stop;
            cin >> available_fuel;

            single_pit_stop.first = distance_town_stop;
            single_pit_stop.second = available_fuel;

            all_pit_stops.push_back(single_pit_stop);
        }

        reverse(all_pit_stops.begin(), all_pit_stops.end());
        
        int starting_distance;
        int starting_fuel;

        cin >> starting_distance;
        cin >> starting_fuel;

        
        
        
        
        
        
        
        
        
        
        
        int remaining_distance = starting_distance;
        int remaining_fuel = starting_fuel; 
        
        vector <int> fuel_not_taken;

        bool is_possible = true;

        for(auto stop:all_pit_stops)
        {
            int fuel_spent = remaining_distance - stop.first;

            while(fuel_spent > remaining_fuel) 
            {
                if(fuel_not_taken.empty()) is_possible = false;

                else 
                {
                    remaining_fuel += fuel_not_taken.back();
                    fuel_not_taken.pop_back();
                    count += 1;
                }
            }
            fuel_not_taken.push_back(stop.second);
            remaining_distance -= fuel_spent;
            remaining_fuel -= fuel_spent;
            if(! is_possible) break;
        }
        if(is_possible) cout << count << "\n";
        else cout << "-1" << "\n";
    }
}