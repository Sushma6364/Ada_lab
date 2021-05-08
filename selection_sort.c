
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
 
void selectionSort(int arr[], int i, int n)
{
    int min = i;
    for (int j = i + 1; j < n; j++)
    {
        if (arr[j] < arr[min]) {
            min = j;    
        }
    }
    swap(arr, min, i);
 
    if (i + 1 < n) {
        selectionSort(arr, i + 1, n);
    }
}
 
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d\t ", arr[i]);
    }
}
 
int main()
{
    int i,n,arr[1000];
    double time;
    clock_t start,end;
    printf("Enter the total number of elements to be sorted:");
    scanf("%d",&n);
    printf("The elements to be sorted are:\n");
    for(i=0;i<n;i++)
    { 
        arr[i] = rand()%100;
       printf("%d\t",arr[i]);
    }
    printf("\nThe sorted array is:\n");
    start=clock();
    selectionSort(arr, 0, n);
    printArray(arr, n);
    end=clock();
    time = ((double)(end - start))/CLOCKS_PER_SEC;
    printf("\nTime taken to sort the array by using Selection Sort is:%lf\n",time);
}
