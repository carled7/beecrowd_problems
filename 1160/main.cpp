#include <iostream>

using namespace std;

int main(){
    int t, pa, pb;
    float g1, g2;

    cin >> t;

    while(t != 0){

        int years = 0;

        cin >> pa >> pb >> g1 >> g2;

        g1 = g1/100 + 1;
        g2 = g2/100 + 1;

        while(pa <= pb){

            pa *= g1;
            pb *= g2;

            years++;

            if (years > 100)
                break;
        }

        if(years > 100)    
            cout << "Mais de 1 seculo." << endl;
        else
            cout << years << " anos." << endl;
        
        t--;
    }

    return 0;
}