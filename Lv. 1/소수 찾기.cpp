#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<bool> seive(n + 1, true);
    for (int i = 2; i < n + 1; i++) {
        if (seive[i]) {
            for (int j = 2; i*j < n + 1; j++) {
                seive[i*j] = false;
            }
            answer += 1;
        }
    }
    
    return answer;
}
