#include <iostream>
#include <math.h>

using namespace std;

float distanceBetween(int x1, int y1, int x2, int y2)
{

    float distance;

    distance = sqrt(pow(max(x1, x2) - min(x1, x2), 2) + pow(max(y1, y2) - min(y1, y2), 2));

    return distance;
}

bool isAround(float distance, int r1, int r2)
{
    float totalDist = distance + r2;

    if (totalDist <= r1)
        return true;
    else
        return false;
}

int main()
{
    int r1, x1, y1, r2, x2, y2;
    float dist;

    while (cin >> r1)
    {
        cin >> x1 >> y1;

        cin >> r2 >> x2 >> y2;

        dist = distanceBetween(x1, y1, x2, y2);

        if(isAround(dist, r1, r2))
            cout << "RICO" << endl;
        else
            cout << "MORTO" << endl;
    }

    return 0;
}
