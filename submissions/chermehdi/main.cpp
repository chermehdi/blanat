#include <iostream>
#include <vector>
#include <unistd.h>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    cin >> t;
    cout << t * 2 << endl;
}
