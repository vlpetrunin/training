#include <iostream>

int mx_sort_selection(int *A, int size)
{
    int temp;
    int complete = 0;
    int iter = 0;
    while(iter < size)
    {
        iter = 0;
        for(int x = 0; x < (size - 1); x++)
        {
            for(int y = (x + 1); y < size; y++)
            {
                if(A[x] > A[y])
                {
                    temp = A[x];
                    A[x] = A[y];
                    A[y] = temp;
                    complete++;
                }
                else
                    iter++;
            }       
        }
    }
    return complete;
}

int main()
{
    int Mass[]{5, 6, -2, 0, -45};
    int size = sizeof(Mass) / sizeof(int); 
    int com = mx_sort_selection(Mass, size);

    for(int i = 0; i < size; i++)
        std::cout << Mass[i] << "  "; 
    std::cout << '\n';
    std::cout << com;

}