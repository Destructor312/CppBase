#include<iostream>

using namespace std;

void Snake_diagonal(int n, int** arr)
{
    int numbers = n + n - 1;
    int i = 0, j = 0;
    int p = 1;
    for (int q = 1; q <= numbers; q++)
    {
        // опр. направления(справа налево и вниз)
        if (0 == i || j == n - 1) 
        {
            //пока не дойдём до стенки
            while (j > 0 && i < n - 1)
            {
                arr[i][j] = p++;
                i++;
                j--;
            }
            arr[i][j] = p++;
            if (i < n - 1) i++;
            else j++;
        } else {
            while (i > 0 && j < n - 1)
            {
                arr[i][j] = p++;
                i--;
                j++;
            }
            arr[i][j] = p++;

            if (j < n - 1) j++;
            else i++;
        }
    }
}

void PrintMatrix(int n, int** arr) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << "\t";
        cout << endl;
    }
}

int main()
{
    int** arr;
    int n = 8;
    int k;

    arr = new int* [n];
    for (int i = 0; i < n; i++)
        arr[i] = new int[n];
    
    Snake_diagonal(n, arr);
    PrintMatrix(n, arr);
}

