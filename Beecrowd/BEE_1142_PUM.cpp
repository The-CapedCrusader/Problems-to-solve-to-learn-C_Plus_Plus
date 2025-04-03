//BEE 1142
//https://judge.beecrowd.com/en/problems/view/1142
#include<bits/stdc++.h>
using namespace std;
int main (){
    int ans = 1;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cout << ans << " " << ans+1 << " " << ans+2 << " PUM" << endl;
        ans+=4;
    }
    return 0;
}