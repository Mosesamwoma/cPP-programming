#include <iostream>
using namespace std;

int main()
{
    int score[5];
    int sum = 0;

    for(int i = 0; i < 5; i++)
    {
        cout << "Enter the number: ";
        cin >> score[i];
        sum += score[i];
    }

    cout << "The total sum is: " << sum << endl;

    return 0;
}
