//Even, Odd, Positive and Negative


#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n; 
    int A[n];
    int ev = 0;
    int od = 0;
    int pos = 0;
    int neg = 0;
    for (int i =0; i<n;i++){
        cin >> A[i];
        if (A[i]%2 == 0){
            ev++;
        }
        else if (A[i]%2!=0){
            od++;
        }
        if (A[i]<0){
            neg++;
        }
        else if(A[i]>=0){
            pos++;

        }
    

    }
    
    cout << "Even:" << ev << endl; 
    cout << "Odd:" << od << endl; 
    cout << "Positive:" << pos << endl; 
    cout << "Negative:" << neg << endl; 
    return 0; 


}

