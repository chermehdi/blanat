#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    const long long size_in_gb = 64LL;
    const long long size_in_bytes = size_in_gb * 1024LL * 1024LL * 1024LL;

    try {
        char* large_memory_block = new char[size_in_bytes];
        int t; cin >> t;
        cout << t * 2 << endl;

        // If allocation is successful, print a message
        cerr << "Successfully allocated 64GB of memory." << endl;

        // Don't forget to free the allocated memory
        delete[] large_memory_block;
    } catch (bad_alloc& e) {
        // Allocation failed, print an error message
        cerr << "Failed to allocate memory: " << e.what() << endl;
    }

    return 0;
}