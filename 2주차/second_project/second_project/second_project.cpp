#include <iostream>
#include <conio.h> // getch 함수를 사용하기 위해 추가
#include <thread>

using namespace std;

int main() {
    // 스플래시 이미지 출력
    cout << "kisang's project" << endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));

    char command;
    bool isRunning = true;

    while (isRunning) {
        // 커맨드 입력을 받고 출력
        cout << "command> ";
        command = _getch(); // 한 글자 입력 받음
        cout << command << endl;

        switch (command) {
        case 'q':
            cout << "qwer 화이팅" << endl;
            break;
        case 'w':
            cout << "과제 너무 좋다" << endl;
            break;
        case 'e':
            cout << "담주부턴 과제량 3배다" << endl;
            break;
        case 'r':
            cout << "행복합니다." << endl;
            break;
        case 27: // ESC 키 누르면 종료
            isRunning = false;
            break;
        default:
            cout << "오류: 유효하지 않은 입력입니다." << endl;
            break;
        }
    }

    return 0;
}
