#include <iostream>

using namespace std;

int getBigger(int x, int y)
{

    if (x > y)
        return x;

    return y;
}

int getSmaller(int x, int y)
{

    if (x > y)
        return y;

    return x;
}

int main()
{

    int x, y, sum = 0;

    cin >> x;
    cin >> y;

    for (int i = getSmaller(x, y); i <= getBigger(x, y); i++)
    {
        if (i % 13 != 0)
        {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}