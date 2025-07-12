#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char argv[])
{
    int n, m;
    int max = 0;

    for (int i = 1; i <= 9; ++i)
    {
        for (int j = 1; j <= 9; ++j)
        {
            int a;
            cin >> a;
            if (a >= max)
            {
                max = a;
                n = i;
                m = j;
            }
        }
    }
    cout << max << "\n" << n << " " << m << endl;
    return 0;
}