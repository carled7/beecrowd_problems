#include <iostream>

using namespace std;

void printM(int *mtx[], int n, int m)
{
    for (int l = 0; l < n; l++)
    {
        for (int c = 0; c < m; c++)
        {
            cout << mtx[l][c] << " [" << l << "][" << c << "] ";
        }
        cout << endl;
    }
}

int main()
{

    int m, n;

    cin >> n >> m;

    int mtx[n][m];

    for (int l = 0; l < n; l++)
    {
        for (int c = 0; c < m; c++)
        {
            cin >> mtx[l][c];
        }
    }

    int ultimoZeroConsc[n];

    for (int l = 0; l < n; l++)
    {
        bool zeroEsquerda = true;

        for (int c = 0; c < m; c++)
        {
            if (zeroEsquerda == true)
                zeroEsquerda = mtx[l][c] == 0 ? true : false;

            if (zeroEsquerda == false)
            {
                ultimoZeroConsc[l] = c - 1;
                break;
            }
            else
                ultimoZeroConsc[l] = c;
        }
    }

    bool escada = true;

    for (int i = 1; i < n; i++)
    {
        if(ultimoZeroConsc[i] == (m - 1)){
            for (int t = i; t < n; t++)
            {
                if(ultimoZeroConsc[t] != (m-1))
                    escada = false;
            }
            break;
        }
        if (ultimoZeroConsc[i - 1] >= ultimoZeroConsc[i])
        {
                escada = false;
        }
    }

    if (escada)
        cout << "S" << endl;
    else
        cout << "N" << endl;
}
