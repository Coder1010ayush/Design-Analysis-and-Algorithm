/*
    Time Complexiety : O(n^2)
    Stable Sorting Agorithm 
*/



#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;

void bubble_sort(int (&arr)[]){
    bool swap = false;
    int n = 10;
    for(int i =0;i<n;i++){
        swap = false;
        for(int j = 0;j<n-i+1;j++){

            if(arr[j] > arr[j+1]){
                int x = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = x;
                swap = true;
            }

        }
        if(!swap) break;
    }

}

int main(){

    int t;
    cin>>t;
    while(t--){
        int arr[10];
        for(int i=0;i<10;i++){
            arr[i] = rand()%100;
        }
        cout<< "array is : ";
        for(int i =0;i<10;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        bubble_sort(arr);
        cout<< "sorted array is : ";
        for(int i =0;i<10;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;

}