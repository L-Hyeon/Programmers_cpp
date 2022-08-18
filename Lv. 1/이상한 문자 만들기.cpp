#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int idx = 0;
    for (auto e : s) {
        if (e == ' ') {
            answer += e;
            idx = 0;
            continue;
        }
        if (idx & 1 && e < 'a') {
            e = tolower(e);
        }
        else if (idx % 2 == 0 && 'a' <= e) {
            e = toupper(e);
        }
        answer += e;
        idx += 1;
    }
    return answer;
}

string solution(string s) {
    string answer = "";
    int idx = 0;
    for (int e : s) {
        if (e == ' ') {
            answer += e;
            idx = 0;
            continue;
        }
        if (idx & 1 && e < 'a') {
            e += 32;
        }
        else if (idx % 2 == 0 && 'a' <= e) {
            e -= 32;
        }
        answer += e;
        idx += 1;
    }
    return answer;
}