#include<bits/stdc++.h>
using namespace std;

    int main(){
        int n;
        cin >> n;
        int A[n];
        for(int i=0; i<n; i++){
            cin >> A[i];
        }
         for( int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if (A[i]> A[j]){
                    int temp = A[i];
                    A[i] = A[j];
                    A[j] = temp;
                }
            }
         }
         for(int i=0; i<n; i++){
            cout << A[i] << " ";
        }
        return 0;

    }
