    #include "bits/stdc++.h"

    using namespace std;

    long long int factorial(int x){
        if(x <= 1)
            return 1;
        

        return x * factorial(x - 1);
    }

    int main(){
        int m, n;

        while ((cin >> n >> m))
        {
            long long int sum = factorial(m) + factorial(n);
            cout << sum << endl;
        }
        return 0;
    }
