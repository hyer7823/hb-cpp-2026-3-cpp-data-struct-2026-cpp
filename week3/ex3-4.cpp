// EX3-4

#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string word;

    int minLength = 1000000; // 매우 큰 값으로 초기화 (최솟값 찾기용)
    int maxLength = 0;       // 최댓값은 0으로 시작

    // 입력이 끝날 때까지 반복 (EOF까지)
    while (cin >> word) {
        int len = word.length(); // 현재 단어 길이

        // 최댓값 갱신
        if (len > maxLength) {
            maxLength = len;
        }

        // 최솟값 갱신
        if (len < minLength) {
            minLength = len;
        }
    }

    // 결과 출력
    cout << "가장 긴 문자열 길이: " << maxLength << endl;
    cout << "가장 짧은 문자열 길이: " << minLength << endl;

    return 0;
}