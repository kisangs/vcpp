#include <iostream>
#include <conio.h>
#include <chrono>
#include <thread>

using namespace std;

int main() {
    char inputBuffer[256]; // 입력을 저장할 버퍼
    int bufferIndex = 0; // 현재까지 입력된 문자의 개수

    cout << "키보드 입력을 3초 동안 받습니다. (3초 후에 종료됩니다)" << endl;

    // 현재 시간 기록
    auto startTime = chrono::high_resolution_clock::now();
    auto currentTime = startTime;

    // 3초 동안 입력 받기
    while (chrono::duration_cast<chrono::seconds>(currentTime - startTime).count() < 3) {
        if (_kbhit()) {
            char ch = _getch(); // 키보드 입력 받기
            inputBuffer[bufferIndex] = ch;
            bufferIndex++;

            // 엔터 키를 입력하면 입력 종료
            if (ch == '\r') {
                break;
            }
        }

        // 현재 시간 업데이트
        currentTime = chrono::high_resolution_clock::now();
    }

    // 입력 결과 출력
    cout << "3초 동안 입력 받은 내용: ";
    for (int i = 0; i < bufferIndex; i++) {
        cout << inputBuffer[i];
    }
    cout << endl;

    return 0;
}
;