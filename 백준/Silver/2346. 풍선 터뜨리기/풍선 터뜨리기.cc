#include <iostream>
#include <deque>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> a(N+1);

    for(int i = 1; i <= N; i++)
    {
        cin >> a[i];
    }

    deque<int> deque;
    for(int i = 1; i <= N; i++)
    {
        deque.push_back(i);
    }
    
    vector<int> order;
    order.reserve(N);

    while(!deque.empty())
    {
        int id = deque.front();
        deque.pop_front();
        order.push_back(id);

        if(deque.empty())
            break;
        int k = a[id];
        if(k > 0)
        {
            int step = (k - 1) % deque.size();
            while(step--)
            {
                deque.push_back(deque.front());
                deque.pop_front();
            }
        }
        else
        {
            int step = (-k) % deque.size();
            while(step--)
            {
                deque.push_front(deque.back());
                deque.pop_back();
            }
        }      
    }
    for(int i = 0; i < (int)order.size(); i++)
    {
        if(i)
            cout << ' ';
        cout << order[i];
    }
    cout << "\n";
    return 0;
}
