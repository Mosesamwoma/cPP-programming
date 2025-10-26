#include <iostream>
using namespace std;

int main() {
    for (int j = 1; j <= 5; j++) {
        for (int k = 1; k <= 5; k++) {
            cout<< j * k << "\t";
        }
        cout << endl;
    }

    return 0;
}
