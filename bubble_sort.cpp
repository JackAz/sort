#include <iostream>

using namespace std;

void bubble(int arr[],int n){
    int tmp;
    int i;
    for(i=0;i<n-1;i++){
        if(arr[i+1]<arr[i]){
            tmp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = tmp;
        }
    }
}

void bubble_sort(int arr[], int n){
    int i;
    for(i=n;i>0;i--){
        bubble(arr,i);
    }
}

int main(){
    int n = 9;
    int arr[] = {8,3,2,5,7,1,9,6,4};
    bubble_sort(arr,n);

    for(int i = 0;i<n;i++)
        cout<<arr[i]<<' ';
    cout<<endl;

    return 0;
}
