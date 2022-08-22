#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for (auto e : s) {
        if (e == ' ') {
            answer += e;
        }
        else if (e < 'a') {
            answer += static_cast<char>((e - 'A' + n) % 26 + 'A');
        }
        else {
            answer += static_cast<char>((e - 'a' + n) % 26 + 'a');
        }
    }
    return answer;
}