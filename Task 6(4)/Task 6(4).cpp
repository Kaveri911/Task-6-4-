#include "Complex.h"

void sort(int arr[], int N)
{
    int c = 0, i = 0, j = 1, k = N;

    for (int j = 0; j < N; )
    {
        for (int i = (j + 1);;)
        {
            if (i == N)
            {
                j++;
                break;
            }

            if (arr[j] > arr[i])
            {
                c = arr[j];
                arr[j] = arr[i];
                arr[i] = c;

                break;
            }

            if (arr[j] <= arr[i])
            {
                i++;
            }
        }
    }

    for (int z = 0; z < N; z++)
    {
        cout << arr[z] << " ";
    }

}

void sort(Complex arr[], int N)
{
    int i = 0, j = 1, k = N;

    Complex c;

    for (int j = 0; j < N; )
    {
        for (int i = (j + 1);;)
        {
            if (i == N)
            {
                j++;
                break;
            }

            if (arr[j] > arr[i])
            {
                c = arr[j];
                arr[j] = arr[i];
                arr[i] = c;

                break;
            }

            else
            {
                i++;
            }
        }
    }

    for (int z = 0; z < N; z++)
    {
        arr[z].printComplex();
        cout<<" ";
    }
}

int main()
{
    setlocale(LC_ALL, "rus");

    int const N = 10;



    Complex arr[N];

    for (int i = 0; i < N; i++)
    {
        arr[i].Change_re(rand() % 10);

        arr[i].Change_im(rand() % 10);
    }
    for (int i = 0; i < N; i++)
    {
        arr[i].printComplex();
        cout << " ";
    }
    cout << "\n Отсортированный массив " << endl;
    sort(arr, N);
}