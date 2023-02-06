//https://www.hackerrank.com/challenges/mini-max-sum/submissions/code/294508655



#include <bits/stdc++.h>
typedef long long L;
using namespace std;

int main(){
    L s[5];
    L d = 0;
    for(int i = 0; i < 5; i++){
        cin >> s[i];
        d += s[i];
    }
    sort(s,s+5);
    cout << d-s[4] << " " << d-s[0] << endl;
}
