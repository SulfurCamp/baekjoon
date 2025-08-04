#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    int n, w, L;

    cin >> n >> w >> L;

    queue<int> wait;
    for(int i = 0; i < n; i++)
    {
        int weight;
        cin >> weight;
        wait.push(weight);
    }
    int time = 0;
    int bridge_weight = 0;
    queue<int> bridge;

    for(int i = 0; i < w; i++)
    {
        bridge.push(0);
    }
    while(!wait.empty())
    {
        time++;

        bridge_weight -= bridge.front();
        bridge.pop();

        if((bridge_weight+wait.front())<=L)
        {
            int next = wait.front();
            bridge_weight += next;
            bridge.push(next);
            wait.pop();
        }
        else
        {
            bridge.push(0);
        }
    }
    time += w;

    cout << time << endl;

    return 0;

}