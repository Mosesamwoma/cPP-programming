#include <iostream>
using namespace std;

int main() {
    int score[6];
    int i;
    int sum = 0;

    cout << "Enter six numbers: \n";
    for (i = 0; i < 6; i++) {
        cin >> score[i];
        sum += score[i];
    }

    double average = static_cast<double>(sum) / 6;

    cout << "The average is: " << average << endl;

    return 0;
}
