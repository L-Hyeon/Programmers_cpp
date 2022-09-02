#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int p = 0, y = 0;
    for (char e : s) {
        if (e == 'p' || e == 'P')
            p += 1;
        else if (e == 'y' || e == 'Y')
            y += 1;
    }
    return (p == y) ? true : false;
}