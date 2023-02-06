//https://www.hackerrank.com/challenges/simple-array-sum/submissions/code/294514340


# include <iostream>
# include <vector>
using namespace std ;
int main (){
    int a,sum=0;
    cin >>a;
    vector <int> b(a);
     for (int i=0;i<b.size();i++){
        cin >>b[i];
        
    }
      for (int i=0;i<b.size();i++){
           sum += b[i];
     }
       cout<<sum ;
    return 0;
}
