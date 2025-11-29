#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of each type of disk (light = dark): ";
    cin >> n;

    int size = 2 * n;

    char* disks = new char[size];
 
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0)
            disks[i] = 'D';
        else
            disks[i] = 'L';
    }


    cout << "Initial state: ";
    for (int i = 0; i < size; i++)
        cout << disks[i] << " ";
    cout << endl;


    int moves = 0;

    for (int pass = 0; pass < n; pass++) {
        for (int i = 0; i < size - 1; i++) {
            if (disks[i] == 'D' && disks[i + 1] == 'L') {
                char temp = disks[i];
                disks[i] = disks[i + 1];
                disks[i + 1] = temp;
                moves++;
            }
        }
    }


    cout << "Goal state: ";
    for (int i = 0; i < size; i++)
        cout << disks[i] << " ";
    cout << endl;

    cout << "Total moves: " << moves << endl;
}
