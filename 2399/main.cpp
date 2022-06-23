#include <iostream>
#include <string>
#include <vector>

using namespace std;

void mapBoard(vector <int> v){

    int n = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (i == 0)
        {
            n += v[i] == 1 ? 1 : 0;
            n += v[i + 1] == 1 ? 1 : 0;

        }else if(i == (v.size() - 1)){

            n += v[i - 1] == 1 ? 1 : 0;
            n += v[i] == 1 ? 1 : 0;
        
        }else{

            n += v[i - 1] == 1 ? 1 : 0;
            n += v[i] == 1 ? 1 : 0;
            n += v[i + 1] == 1 ? 1 : 0;

        }
        cout << n << endl;
        n = 0;
    }
}


vector <int> readData(vector <int> v){

    int buffer, n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> buffer;
        v.push_back(buffer);
    }
    
    return v;
}

int main (){

    vector <int> board;

    board = readData(board);

    mapBoard(board);

    return 0;
}