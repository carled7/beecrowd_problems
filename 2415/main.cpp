#include <iostream>
#include <string>
 
using namespace std;
 
int pointsMarked(string str){

    string aux, num;
    int maxPoints = 0, points = 1;

    for (int i = 0; i < str.length(); i++){

        if(str[i] != ' ' && i != str.length() - 1)

            aux.push_back(str[i]);

       else{

            if(num.empty())
                num = aux;
            
            if(aux.compare(num) == 0)
                points++;
            else{
                points = 1;
                num = aux;
            }
            
            if(points > maxPoints)
                maxPoints = points;

            if(i != str.length() - 2)
                aux.erase();
        }
        
    }

    return maxPoints;
}


int main() {
 
    
    string str;
    int points;

    cout << "Digite os valores sorteados: ";
    getline(cin, str);

    points = pointsMarked(str);

    cout << points;

    return 0;
}