#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

const int MX = 1000005; 
// 문자열의 최대길이 + 1 노드를 배열로 흉내내는 연결리스트
char dat[MX];           
// pre는 이전 노드의 인덱스, nxt는 다음 노드의 인덱스를 저장
int pre[MX], nxt[MX];   
// 다음 사용할 인덱스
int unused = 1;     
// 커서 위치
int cursor = 0;         

void insert(int addr, char c) {
    dat[unused] = c;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];
    if (nxt[addr] != -1)
        pre[nxt[addr]] = unused;
    nxt[addr] = unused;
    unused++;
}

void erase(int addr) {
    nxt[pre[addr]] = nxt[addr];
    if (nxt[addr] != -1)
        pre[nxt[addr]] = pre[addr];
}

void traverse() {
    int cur = nxt[0];
    while (cur != -1) {
        cout << dat[cur];
        cur = nxt[cur];
    }
    cout << '\n';
}

int main() {

    fill(pre, pre + MX, -1);
    fill(nxt, nxt + MX, -1);
    // fill 함수 시작주소, 끝주소 를 지정하고 모든 원소를 채울값으로 초기화한다.
	// 여기선 pre부터 pre+MX까지 -1로 초기화하고 nxt도 마찬가지로 -1로 초기화한다.
    string s;
    cin >> s;

    // 초기 문자열을 리스트에 삽입
    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        insert(cursor, c);
        cursor = nxt[cursor];
    }

    int m;
    cin >> m;

    while (m--) {
        char cmd;
        cin >> cmd;

        switch (cmd) {
        case 'L':  // 왼쪽으로 이동
            if (pre[cursor] != -1)
                cursor = pre[cursor];
            break;

        case 'D':  // 오른쪽으로 이동
            if (nxt[cursor] != -1)
                cursor = nxt[cursor];
            break;

        case 'B':
            if (pre[cursor] != -1) {
                cursor = pre[cursor];
                erase(nxt[cursor]);
            }
            break;

        case 'P': { // 커서 앞에 문자 삽입
            char c;
            cin >> c;
            insert(cursor, c);
            cursor = nxt[cursor];
            break;
        }
        default:   // 예외 명령어 처리 (안 써도 됨)
            break;
        }
    }
    traverse();
    
    return 0;
}
