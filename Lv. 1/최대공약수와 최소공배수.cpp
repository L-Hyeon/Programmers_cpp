#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    int a = (n <= m) ? m : n, b = (n <= m) ? n : m;
    while (b != 0) {
        int temp = a;
        a = b;
        b = temp % b;
    }
    vector<int> res {a, n*m/a};
    return res;
}