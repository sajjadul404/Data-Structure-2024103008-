#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << " Array Size : " << endl;
    cin >> n ;
    
    int A[n];
    cout << " Array Eklement : " << endl;
    for (int i=0; i<n; i++){
        cin >> A[i];
    }
    int Loc = 1, Max=A[0];
    for(int k=0; k<n; k++){
        if (Max < A[k]){
            Loc = k; 
            Max = A[k];
        }
    }
    cout << "Location: " << Loc << endl;
    cout << "Max Element: " << Max << endl;
}