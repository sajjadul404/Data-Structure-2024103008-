#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,Item, Loc =0;
    cin >> n;

    int A[n];
    for (int i=0; i<n;i++){
        cin >> A[i];

    }
    sort(A,A+n);
    cin >> Item;

    int low =0 , high =n-1;
    while (low <= high){
        int  mid= (low + high)/2;
        if (A[mid] == Item){
            Loc = mid + 1;
            break;
        }
        else if (Item < A[mid]){
            high = mid - 1;
        }
        else {
            low = mid +1;
        }
    }

        if (Loc == 0){
        cout << "Not Found" << endl;
    }
    else{
        cout << "Found " << Loc << endl;
    }

    cout << "Sorted Array: ";
    for (int i=0; i<n;i++){ 
        cout << A[i] << " ";
    }


}
