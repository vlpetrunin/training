#include <iostream>

void mx_bubble_sort(int *A, int size)
{
    int iter = 0;
    int temp;
    while(iter < (size - 1))
    {
        int y = 1;
        iter = 0; 
        for(int x = 0; x < (size - 1); x++)
        {
            if(A[x] > A[y])
            {
                temp = A[x];
                A[x] = A[y];
                A[y] = temp;
            }
            else
                iter++;
            y++; 
        }
    }
}

int main()
{
    int Mas[16] = {1, 6, -5, 9, 11, 5, 35, -355, 11, 0, 648, 2345, 32234, 1, 0, -34534};

    mx_bubble_sort(Mas, 16);
        for(int i = 0; i < 16; i++)
            std::cout << Mas[i] << ' ' ; 
}
