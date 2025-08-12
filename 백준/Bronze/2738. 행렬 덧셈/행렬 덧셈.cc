#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char argv[])
{
    int n, m;
    //cout << "행렬의 행과 열을 입력하시오." << endl;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m, 0));
    vector<vector<int>> b(n, vector<int>(m, 0));
    //cout << "행렬 a를 입력하시오." << endl;
    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];

    //cout << "행렬 b를 입력하시오." << endl;
    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < m; ++j) 
            cin >> b[i][j];
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;

}