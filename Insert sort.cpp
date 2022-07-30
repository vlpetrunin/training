#include <iostream>

void mx_insert_sort(int *a, int size)
{
    int y, temp;
    for(int x = 1; x < size; x++)
    {
        for(y = 0; y < x; y++)
        {
            if(a[y] > a[x])
            {
                temp = a[x];
                a[x] = a[y];
                a[y] = temp;
            }
        }
    }
}


int main()
{
    int Mass[]{5, 0, -23, 56, 11, -18};
    int size = sizeof(Mass) / sizeof(int);

    mx_insert_sort(Mass, size);
    for(int i = 0; i < size; i++)
        std::cout << Mass[i] << ' ';
}
