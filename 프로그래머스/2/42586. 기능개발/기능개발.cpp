#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> days;
    
    for(int i = 0; i < progresses.size(); i++)
    {
        int work = 100 - progresses[i];
        int day = (work + speeds[i] - 1) / speeds[i];
        days.push(day);
    }
    
    while(!days.empty())
    {
        int current = days.front();
        days.pop();
        int count = 1;
        
        while(!days.empty() && days.front() <= current)
        {
            days.pop();
            count++;
        }
        answer.push_back(count);
    }
    return answer;
}