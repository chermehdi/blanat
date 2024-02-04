#include <iostream>
#include <vector>
#include <unistd.h>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    sleep(5); // inject slowness
    int t; 
    cin >> t;
    int ans = t + t;
    cout << ans << endl;
}
