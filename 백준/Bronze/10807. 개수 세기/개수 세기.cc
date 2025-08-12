#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, v, count = 0;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    cin >> v;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == v)
            count++;
    }
    cout << count << "\n";
    return 0;
}

