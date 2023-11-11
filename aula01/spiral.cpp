#include <bits/stdc++.h>
using namespace std;

int value_diagonal(int x, int y)
{
    int greater_coord = x * (x > y) + y * (y >= x);

    int diagonal = 1 + (greater_coord - 1) * greater_coord;

    return diagonal;

}


int main() 

{

    int testcases;
    int x_coord;
    int y_coord;

    cin >> testcases;

    for(int i = 0; i < testcases; i++)
    {
        cin >> x_coord;
        cin >> y_coord;

        int valor_do_ponto;
        int greater_coord = x_coord * (x_coord > y_coord) + y_coord * (y_coord >= x_coord);
        int smaller_coord = x_coord * (x_coord < y_coord) + y_coord * (y_coord <= x_coord);
        
        if(x_coord == y_coord) valor_do_ponto = value_diagonal(x_coord, y_coord);

        else 
        { 
            if(greater_coord % 2 == 0) 
            {
            
            if(x_coord == smaller_coord) valor_do_ponto = value_diagonal(x_coord, y_coord) - (greater_coord - x_coord);

            else valor_do_ponto = value_diagonal(x_coord, y_coord) + (greater_coord - y_coord);
                
            }
            else
            {
                if (x_coord == smaller_coord) valor_do_ponto = value_diagonal(x_coord, y_coord) + (greater_coord - x_coord);

                else valor_do_ponto = value_diagonal(x_coord, y_coord) - (greater_coord - y_coord);
            }
    
        }
        cout << valor_do_ponto << endl;
    }
}


