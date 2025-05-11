//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G
//https://asksenior.in/solve

#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    for (int i=0; i<T;i++){
        long long n;
        cin >> n; 
        int fct = 1;
        for (int j = 1; j<=n;j++){
            fct=fct*j ;

        }
        cout << fct << endl; 




    }
    

    
     
    return 0; 


}

