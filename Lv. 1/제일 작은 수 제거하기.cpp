#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    if (arr.size() == 1){
        answer.push_back(-1);
        return answer;
    }
    int min = -1;
    for (int e : arr) {
        if (min == -1 || e < min) {
            min = e;
        }
    }
    for (int e : arr) {
        if (e != min) {
            answer.push_back(e);
        }
    }
    return answer;
}