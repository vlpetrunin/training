#include <iostream>

void mx_swap(int *a, int *b)
{
   int temp = *a;
   *a = *b;
   *b = temp;
}
void mx_quick_sort(int *a, int left, int right)
{
   if(left < right)
   {
      int le = left;
      int ri = right;
      while(le < ri)
      {
         if(le < ri)
         {
         while(a[le] < a[ri])
            ri--;  
         mx_swap(&a[le], &a[ri]);
         le++;
         }
         if(le < ri)
         {
            while(a[ri] > a[le])
               le++;
            mx_swap(&a[le], &a[ri]);
            ri--;
         }
      }
      mx_quick_sort(a, left, ri);
      mx_quick_sort(a, le, right);
   }
}

int main()
{
    int Mass[]{45, -23, 23, 8, 0, -11, 55, 49, 9, -102, 32, 71};
    int size = sizeof(Mass) / sizeof(int);
    int left = 0;
    int right = size;
    mx_quick_sort(Mass, left, size);
    for(int i = 0; i < size; i++)
        std::cout << Mass[i] << ' ';
}
