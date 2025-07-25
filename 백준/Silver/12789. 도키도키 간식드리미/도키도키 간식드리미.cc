#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {

    int N;
    cin >> N;

	queue<int> line;
	for (int i = 0; i < N; i++) {
		int number;
        cin >> number;
		line.push(number);
	}

	stack<int> wait_line;
	int count = 1;
    while (count <= N)
    {
        if (!line.empty() && line.front() == count)
        {
            line.pop();
            count++;
        }
        else if (!wait_line.empty() && wait_line.top() == count)
        {
            wait_line.pop();
            count++;
        }
        else if (!line.empty()) {
            wait_line.push(line.front());
            line.pop();
        }
        else
            break;
    }
	cout << (count > N && wait_line.empty() ? "Nice" : "Sad") << endl;
}

