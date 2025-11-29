#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n, m, k, o, z, l, i, j, q;
    cin >> n >> m;
    z = n * m;
    int a[1000][1000];
    k = 0;
    o = 0;
    l = 0;
    i = 0;
    j = 0;
    if (n == 1 && m == 1) {
        cout << setw(4) << fixed;
        cout << 1;
    }
    else {
        while (k < z - 1)
            if (i == o && j < m - l - 1)
            {
                k++;
                a[i][j] = k;
                j++;
            }
            else
            {
                if (i < n - o - 1 && j == m - l - 1)
                {
                    k++;
                    a[i][j] = k;
                    i++;
                }
                else
                {
                    if (i == n - o - 1 && j > l) {
                        k++;
                        a[i][j] = k;
                        j--;
                    }
                    else
                    {
                        if (i > o + 1 && j == l) {
                            k++;
                            a[i][j] = k;
                            i--;
                        }
                        else
                        {
                            if (i == o + 1 && j == l) {
                                o++;
                                l++;
                            }
                        }
                    }
                }
            }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << setw(4) << fixed;
            if (a[i][j] == 0) { a[i][j] = k + 1; }
            cout << a[i][j];
        }
        cout << "\n";
    }
    return 0;
}