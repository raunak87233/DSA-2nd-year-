#include<iostream>
#include <vector>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    vector<int>p(n);
    for (int i=0;i<p.size();i++)
    {
        cin >> p[i];
        int q=p[i]%5;
    if (p[i]%5==0||p[i]<38)
       cout <<p[i]<<endl;
    else if (q<3)
        cout <<p[i]<<endl;
 
    else if (q>=3)
        cout << p[i]+5-q<<endl;  
    }
    return 0;
    }
