#include <iostream>
using namespace std;
int main()
{
    int n, m;
     cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;
    int **a = new int *[n];
    for (int i = 0; i < n; i++)
        a[i] = new int[m];
    cout << "Enter matrix: "<< endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    int *b = new int[m * n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            b[i * m + j] = a[i][j];
    cout << "Array : ";
    for (int k = 0; k < n * m; k++)
        cout << b[k] << ' ';
    return 0;
}
/*
int main()
{
    int n, m;
    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;
    int **a = new int *[n];
    for (int i = 0; i < n; i++)
        a[i] = new int[m];
    int *b = new int[m * n];
    cout << "Enter array: ";
    for (int k = 0; k < n * m; k++)
        cin >> b[k];
    for (int i = 0; i < n * m; i++)
        a[i / m][i % m] = b[i];
    cout << "Matrix :" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}*/