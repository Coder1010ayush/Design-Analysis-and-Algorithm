/*
    Merge Sort is an example of Divide and Conquer Strategy

*/


#include<iostream>
#include<algorithm>
#include<cstdlib>

using namespace std;
void merge(int (&arr)[] , int lower_bound, int mid , int upper_bound)
{
    int left = lower_bound;
    int right = mid + 1;
    int count = 0;
    int temp[upper_bound+1];
    
    while(left <= mid && right <= upper_bound)
    {
        if(arr[left] <= arr[right])
        {   
            temp[count] = arr[left];
            left++;
        }
        else
        {
            temp[count] = arr[right];
            right++;
        }
        count++;
    }


    while(left <= mid)
    {
        temp[count] = arr[left];
        count++;
        left++;
    }

    while(right <= upper_bound)
    {
        temp[count] = arr[right];
        right++;
        count++;
    }

    for(int i = lower_bound ; i<upper_bound ; i++)
    {
        arr[i] = temp[i-lower_bound];
    }

} 

void mergeSort(int (&arr)[],int size,int lower_bound,int upper_bound)
{   
    if (lower_bound == upper_bound)
    {
        return;
    }
    int mid = (lower_bound + upper_bound)/2;
    mergeSort(arr, size , lower_bound , mid);
    mergeSort(arr, size , mid+1,upper_bound);
    merge(arr , lower_bound , mid , upper_bound);
    
}

int main()
{

    int t;
    cin>>t;
    while (t--)
    {
        const int size = 10;
        int arr[size];
        for(int i =0;i<size;i++)
        {
            arr[i] = rand()%100;
        }
        cout<<"array is : ";
        for(int i =0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        mergeSort(arr,size, 0 , size-1);
        cout<<"sorted array is : ";
        for(int i=0;i<size; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


