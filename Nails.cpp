#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>

using namespace std;

long long lenghts[101];
long long numbers[101];

int main(){

    long long n;
    cin >> n;

    long long temp;
    for (int i = 1; i <= n; i++) cin >> numbers[i];

    sort(numbers+1, numbers + n+1);

    if (n >= 1) lenghts[1] = 0;
    if (n >= 2) lenghts[2] = numbers[2]- numbers[1];
    if (n >= 3)lenghts[3] = numbers[3] - numbers[2] + lenghts[2];
    for (int i = 4; i <= n; i++) {
        lenghts[i]= min(numbers[i] - numbers[i-1] + lenghts[i-1], numbers[i] - numbers[i-1] + lenghts[i-2]);
    }

    cout << lenghts[n];

    return 0;
}