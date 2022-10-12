#include<iostream>
using namespace std;

int main(){
    int n,scores[1000],i,max,min,x=0,m=0;
    cin>>n;

  for(i=0;i<n;i++){
        cin>>scores[i];
        max=scores[0];
        min=scores[0];
    }

   for(i=0;i<n;i++){
        if(scores[i]>max){
            max=scores[i];
            x++;
        }
    }
  
    for(i=0;i<n;i++){
        if(scores[i]<min){
            min=scores[i];
            m++;
        }
        
    }
    cout<<x<<" "<<m;
     return 0;
}
