#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

static const int MAX = 25;
int N;
char map[MAX][MAX];
bool visit[MAX][MAX];


int main()
{
    int N;
    cin >> N;
    for(int i = 0; i<N; i++)
    {
        cin >> map[i];
    }
    vector<int> size;
    size.reserve(N*N);

    for(int i = 0; i< N*N; i++)
    {
        int row = i / N;
        int col = i % N;

        if(map[row][col] != '1' || visit[row][col])
            continue;
        
        queue<int> q;
        visit[row][col] = true;
        q.push(i);

        int count = 0;

        while(!q.empty())
        {
            int current = q.front();
            q.pop();
            int current_row = current / N;
            int current_col = current % N;

            count++;

            if(current_row - 1 >= 0 && !visit[current_row -1][current_col] && map[current_row - 1][current_col] == '1')
            {
                visit[current_row - 1][current_col] = true;
                q.push((current_row - 1) * N + current_col);
            }
            if(current_row + 1 < N && !visit[current_row + 1][current_col] && map[current_row + 1][current_col] == '1')
            {
                visit[current_row + 1][current_col] = true;
                q.push((current_row + 1) * N + current_col);
            }            
            if(current_col -1 >= 0 && !visit[current_row][current_col - 1] && map[current_row][current_col - 1] == '1')
            {
                visit[current_row][current_col - 1] = true;
                q.push(current_row * N + (current_col - 1));
            }
            if(current_col + 1 < N && !visit[current_row][current_col + 1] && map[current_row][current_col + 1] == '1')
            {
                visit[current_row][current_col + 1] = true;
                q.push(current_row * N + (current_col + 1));
            }            
        }            
        size.push_back(count);
    }
    sort(size.begin(), size.end());
    cout << (int)size.size() << '\n';
    for(int x : size)
    {
        cout << x << '\n';
    }
    return 0;

}