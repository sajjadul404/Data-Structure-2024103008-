#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, e;
    cin >> n >> e;

    int asj_mat [n][n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            asj_mat[i][j] = 0;
        }
    }
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if (i == j){
                asj_mat[i][j]=1;
            }
        }
    }

    for (int i=0; i<e; i++){
        int a,b;
        cin >> a >> b; 
        asj_mat[a][b] = 1;
        

    }
      for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
           cout << asj_mat[i][j] << " ";
        }
        cout << endl;
    }

}