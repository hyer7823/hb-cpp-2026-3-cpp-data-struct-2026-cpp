// EX3-3

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main (void) {
    vector<string> words;   // 단어 목록
    vector<int> counts;     // 각 단어 등장 횟수
    string input;

    // 입력 받기 (EOF까지)
    while (cin >> input) {
        int found = 0;  // 0 = 아직 없음, 1 = 이미 있음

        // 이미 등장한 단어인지 확인
        for (int i = 0; i < words.size(); i++) {
            if (words[i] == input) {
                counts[i]++;  // 있으면 개수 증가
                found = 1;    // 이미 있음 표시
                break;
            }
        }

        // 처음 등장한 단어라면 추가
        if (found == 0) {
            words.push_back(input);
            counts.push_back(1);
        }
    }

    // 결과 출력
    for (int i = 0; i < words.size(); i++) {
        cout << words[i] << " : " << counts[i] << endl;
    }

    return 0;
}