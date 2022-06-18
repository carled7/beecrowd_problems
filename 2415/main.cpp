#include <iostream>
#include <string>
#include <vector>

using namespace std;

int ptsMarked(vector<int> v)
{

    int pts = 0, mxPts = 0, lastMatch, t = 0, i = 0;

    while (t < v.size())
    {

        while (t < v.size())
        {
            if (v.at(i) == v.at(t))
            {
                pts++;

                if (pts > mxPts)
                    mxPts = pts;
                
                t++;
            }
            else{
                pts = 0;
                i = t;
                break;
            }
        }
        
    }

    return mxPts;
}

vector<int> readData(vector<int> v)
{

    int n, buffer;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> buffer;
        v.push_back(buffer);
    }

    return v;
}

int main()
{

    vector<int> values;
    int pts;

    values = readData(values);

    pts = ptsMarked(values);

    cout << pts << endl;

    return 0;
}
