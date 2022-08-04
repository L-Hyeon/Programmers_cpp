bool solution(int x) {
    int sum = 0, temp = x;
    while (0 < temp) {
        sum += temp % 10;
        temp /= 10;
    }
    return (x % sum == 0) ? true : false;
}