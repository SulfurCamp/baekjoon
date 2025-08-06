#include <iostream>
using namespace std;
int main()
{
	int N; int count = 0; int sum = 0;
	while (true)
	{
		cin >> N;
		if (N == -1) break;
		int* arr = new int[N];
		for (int i = 1; i < N; ++i)
		{
			if (N % i == 0)
			{

				arr[count++] = i; 
				sum += i; 
			}
		}
		if (sum == N) //완전수
		{
			cout << N << " = ";
			for (int i = 0; i < count; ++i)
			{
				if (i == count - 1) cout << arr[i] << endl; 
				else cout << arr[i] << " + ";
			}
		}
		else cout << N << " is NOT perfect." << endl;
		cin.ignore(); 
		count = 0; sum = 0; 
	}
	
}