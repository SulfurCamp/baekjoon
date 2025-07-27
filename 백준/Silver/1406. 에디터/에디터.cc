#include <iostream>
#include <list> // STL 양방향 연결 리스트
#include <string>

using namespace std;

int main()
{
	string s;
	cin >> s;

	list<char> editor;

	for (int i = 0; i < s.size(); i++)
	{
		editor.push_back(s[i]); // 입력받은 문자열을 한 글자씩 리스트에 추가
	}
	list<char>::iterator cursor = editor.end(); // 커서를 문자열의 끝에 위치시킴
	int a; // 명령어의 개수
	cin >> a;

	while (a--) {
    char cmd;
    cin >> cmd;

    switch (cmd) {
        case 'L': // 커서를 왼쪽으로
            if (cursor != editor.begin()) {
                cursor--;
            }
            break;

        case 'D': // 커서를 오른쪽으로
            if (cursor != editor.end()) {
                cursor++;
            }
            break;

        case 'B': // 커서 왼쪽 문자 삭제
            if (cursor != editor.begin()) {
                cursor = editor.erase(--cursor);
            }
            break;

        case 'P': { // 문자 삽입 (중괄호로 변수 범위 명시)
            char c;
            cin >> c;
            editor.insert(cursor, c);
            break;
        }

        default:
            // 유효하지 않은 명령은 무시 (필요하면 에러처리 가능)
            break;
        }
    }

	// 리스트의 모든 요소를 출력
	for (char c : editor)
	{
		cout << c;
	}
	cout << endl;
} 