int solution(int n) {
    int res = 0;
    long num = (long) n; 
    while (num != 1) {
        res += 1;
        num = (num % 2) ? 3*num + 1 : num/2;
        if (res == 500) {
            res = -1;
            break;
        }
    }
    return res;
}