//https://www.hackerrank.com/challenges/3d-surface-area/submissions/code/313563348




#include <bits/stdc++.h>
using namespace std;

int A[102][102][102];

int main() {
    int H;
    int W;
    cin >> H >> W;

    for(int i=1; i<=H; i++)
        for(int j=1; j<=W; j++)
        {
            int x;
            cin >> x;
            
            for(int k=1; k<=x; k++)
                A[i][j][k] = 1;
        }
    
    int result = 0;
    
    for(int i=1; i<=100; i++)
        for(int j=1; j<=100; j++)
            for(int k=1; k<=100; k++)
            {
                if(A[i][j][k] == 0)
                    continue;
                
                result += (A[i-1][j][k] == 0);
                result += (A[i+1][j][k] == 0);
                result += (A[i][j-1][k] == 0);
                result += (A[i][j+1][k] == 0);
                result += (A[i][j][k-1] == 0);
                result += (A[i][j][k+1] == 0);
            }
    
    cout << result << endl;
    return 0;
}
