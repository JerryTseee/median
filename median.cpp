#include<iostream>
using namespace std;

//this is used to find the median of a given sorted array
double median(int arr[], int i, int j){
    if (i==j)
    {
        return arr[i];
    }
    else if (i+1 == j){
        return (arr[i]+arr[j]) / 2;
    }
    else{
        return median(arr, i+1, j-1);
    }
};

int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"the median is "<<median(arr, 0, size-1);
    return 0;
}