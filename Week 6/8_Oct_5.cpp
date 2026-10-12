#include <iostream>
using namespace std;

int main() {
    int totalSeconds;
    cout << "Enter number of seconds: ";
    cin >> totalSeconds;

    int hours   = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;

    cout << hours << " hrs " << minutes << " mins " << seconds << " secs" << endl;
    return 0;
}