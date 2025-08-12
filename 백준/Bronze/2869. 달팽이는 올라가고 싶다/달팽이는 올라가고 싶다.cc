#include  <iostream>

using namespace std;

int main(int argc, char* argv[]) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int A, B, V;
	
	cin >> A >> B >> V;

	int cnt = (V - A) / (A - B);
	
	if ((V - A) % (A - B) == 0) {
		cnt += 1;
	}
	else
	{
		cnt += 2;
	}
	cout << cnt << endl;

	return 0;
}