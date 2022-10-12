#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int s,t,a,b,m,n;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    int apples=0,oranges=0;
    vector <int>apple(m);
    vector <int>orange(n);
    for  (int i=0;i<apple.size();i++)
    {
        cin>>apple[i];
       if (((a+apple[i])>=s)&&((a+apple[i])<=t))
        {
         apples=apples+1;
        }
    }
    for (int i=0;i<orange.size();i++)
    {
        cin>>orange[i];
        if  (((b+orange[i])>=s)&&((b+orange[i])<=t))
        {
            oranges=oranges+1;
        }
    }
    cout <<apples<<endl<<oranges<<endl;
    return 0;
}
