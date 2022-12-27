/* complete the tower of Hanoi. :- https://www.hackerrank.com/contests/launchpad-1-winter-challenge/challenges/shift-plates/copy-from/1354122931 */
#include <iostream>
using namespace std;

void towerOfHanoi(int, char, char, char);

int main()
{
    int totalDisc;
    cin >> totalDisc;
    towerOfHanoi(totalDisc, 'A', 'C', 'B');
    return 0;
}

void towerOfHanoi(int totalDisc, char A, char B, char C)
{
    if(totalDisc > 0)
    {
        towerOfHanoi(totalDisc-1, A, C, B);
        cout << "Moving ring " << totalDisc << " from " << A << " to " << C << endl;
        towerOfHanoi(totalDisc-1, B, A, C);
    }
}
