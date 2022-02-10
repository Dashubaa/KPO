#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, sol = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        sum += a;
    }
    sum--;
    n++;
    for(int i = 1; i <= 5; i++) {
        if((sum + i) % n != 0) sol++;
    }
    cout << sol << endl;
    return 0;
}
