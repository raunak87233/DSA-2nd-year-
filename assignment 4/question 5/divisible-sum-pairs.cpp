#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n,k,a=0;
    cin>>n>>k;
    vector <int> ar(n);
    for(int i=0;i<n;i++)
    {
        cin >>ar[i];   
    }
    for (int i=0;i<n;i++)
    {
        for (int j=i;j<n;j++)
        {
            if(i!=j)
            {
                
                if ((ar[i]+ar[j])%k==0)
                {
                     a++;
                    }
            }
           else 
           {
               continue;
            }  
              
        }
        
    }
    cout<<a<<endl;
    return 0;
}
