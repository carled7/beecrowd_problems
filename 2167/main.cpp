#include <iostream>
#include <vector>

using namespace std;

int acharQueda(vector <int> v){
    
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] < v[i - 1])
            return i + 1;

    }
    return 0;
}

int main (){

    vector <int> medidas;
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int buffer;
        cin >> buffer;
        medidas.push_back(buffer);
    }
    
    cout << acharQueda(medidas) << endl;
    
    return 0;
}