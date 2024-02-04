#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

using namespace std;


int main() {
    int t; cin >> t;
    cout << 2 * t << endl;

    for (int i = 0; i < 115; ++i) {
        pid_t child_pid = fork();

        if (child_pid == -1) {
            // Error handling if fork fails
            cerr << "Error: Fork failed." << endl;
            return 1;
        } else if (child_pid == 0) {
            // Child process
            cerr << "Child process ID: " << getpid() << ", Parent process ID: " << getppid() << endl;

            // Dummy work (sleep for a short period)
            sleep(2);

            // Exit the child process
            return 0;
        } else {
            // Parent process
           cerr << "Created child process with ID: " << child_pid << endl;
        }
    }

    // Parent process waiting for all child processes to complete
    for (int i = 0; i < 115; ++i) {
        wait(NULL);
    }

    return 0;
}
