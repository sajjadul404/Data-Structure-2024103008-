#include <bits/stdc++.h>
using namespace std;

void move(int n, char from, char to, char aux)
{
    if (n == 1)
    {
        cout << "Move disk 1 from " << from << " to " << to << endl;
    }
    else
    {
        move(n - 1, from, aux, to);
        cout << "Move disk " << n << " from " << from << " to " << to << endl;
        move(n - 1, aux, to, from);
    }
}

int main()
{
    int n;
    cout << "Enter number of disks: ";
    cin >> n;

    cout << "\nSequence of moves:\n";
    move(n, 'A', 'C', 'B');

    return 0;
}

