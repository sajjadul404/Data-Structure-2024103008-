#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,Item, Loc =0;
    cin >> n;

    int A[n];
    for (int i=0; i<n; i++){
        cin >> A[n];
    }

    cin >> Item ;

    for(int k=0; k<n; k++){
        if (A[k]== Item){
            Loc = k+1;
            break;
        }
    }
    if (Loc == 0){
        cout << "Not Found" << endl;
    }
    else{
        cout << "Found " << endl;
    }
    
}