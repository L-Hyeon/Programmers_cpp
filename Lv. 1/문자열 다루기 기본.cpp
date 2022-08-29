#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    if (s.size() != 4 && s.size() != 6) {
        return false;
    }
    for (char e : s) {
        if (!isdigit(e)) {
            return false;
        }
    }
    return true;
}