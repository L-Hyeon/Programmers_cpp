double solution(vector<int> arr) {
    double res = 0;
    for (int e : arr) {
        res += e;
    }
    return res/arr.size();
}