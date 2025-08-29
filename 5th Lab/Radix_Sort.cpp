#include<bits/stdc++.h>
using namespace std;

int getMax(int A[], int n) {
    int max = A[0];
    for (int i = 1; i < n; i++)
        if (A[i] > max)
            max = A[i];
    return max;
}
void countSort(int A[], int n, int exp) {
    int output[n];
    int i, count[10] = {0};

    for (i = 0; i < n; i++)
        count[(A[i] / exp) % 10]++;

    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (i = n - 1; i >= 0; i--) {
        output[count[(A[i] / exp) % 10] - 1] = A[i];
        count[(A[i] / exp) % 10]--;
    }

    for (i = 0; i < n; i++)
        A[i] = output[i];
}
void radixsort(int A[], int n) {
    int m = getMax(A, n);

    for (int exp = 1; m / exp > 0; exp *= 10)
        countSort(A, n, exp);
}
int main() {
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    radixsort(A, n);
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    return 0;
}
    