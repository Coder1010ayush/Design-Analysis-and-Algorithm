/*
    Time Complexity : O(n^2)
    A unstable sorting algorithm

*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


void insertion_sort(int (&arr)[]){

    for(int i =1 ;i<10 ; i++){
        int key = arr[i];

        int j = i-1;
        while(arr[j] > key && j>=0){
            arr[j+1] = arr[j];
            j -= 1;
        }
        arr[j+1] = key;
    }

}

int main(){

    int t;
    cin>>t;
    while(t--){
        int arr[10];
        for(int i =0;i<10;i++){
            arr[i] = rand()%100;
        }

        cout<<"array is : ";
        for(int i =0;i<10;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        insertion_sort(arr);
        cout<<"sorted array is ";
        for(int i=0;i<10;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}