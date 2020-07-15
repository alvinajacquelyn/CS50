//divide and conquer
//Given an array of length, say n, we perform the following steps to sort the array:
    //Divide the array into 2 parts of lengths n/2 and n - n/2 respectively (here if n is odd, we round off the value of n/2). Let us call these arrays as left half and right half respectively.
    //Recursively sort the left half array and the right half array.
    //Merge the left half array and right half-array to get the full array sorted.

#include <cs50.h>
#include <stdio.h>

void mergesort(int i, int j , int a[], int aux[])
{
    if (j==i)
    {
        return; // the subsection is empty or a single element
    }
    int mid = (i+j)/2;
    // left sub-array is a[i .. mid]
    // right sub-array is a[mid + 1 .. j]

    mergesort(i, mid, a, aux);
    mergesort(mid+1, j , a, aux); // sort left and right arrays recursively

    int startleft = i;
    int startright = mid +1;
    int k;

    // we loop from i to j to fill each element of the final merged array
    for ( k = i; k<=j; k++)
    {
        if (startleft == mid+1)
        {
            aux[k] = a[startright]; // left pointer has reached the limi
            startright ++;
        }
        else if (startright==  j+1) // right pointer has reached the limit
        {
            aux[k] = a[startleft];
            startleft++;
        }
        else if (a[startleft]<a[startright])  // pointer left points to smaller element
        {
            aux[k] = a[startleft];
            startleft++;
        }
        else  // pointer right points to smaller element
        {
            aux[k] = a[startright];
            startright++;
        }
    }
    for (k = i; k <= j; k++)
    {      // copy the elements from aux[] to a[]
        a[k] = aux[k];
    }
}

int main()
{
     int a[100]; int aux[100]; int i;
     int n = get_int("Enter number of elements in the array:\n");

     printf("Enter %d integers\n", n);

     for (i = 0; i<n; i++)
     {
         a[i] = get_int("");
     }

     mergesort(0, n-1, a, aux);

     printf("Print the sorted array\n");
     for (i = 0; i < n; i++)
     {
        printf("%d ", a[i]);
     }

     return 0;
}
