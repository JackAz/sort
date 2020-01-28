#include <iostream>

using namespace std;

void insertion(int arr[],int n){
    int i;
    int tmp;
    for(i=n-1;i>=1;i--){
        if(arr[i]<arr[i-1]){
                tmp = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = tmp;
        }
        else
            break;
    }
}

void insertion_sort(int arr[],int n){
    int i;
    for(i=1;i<=n;i++){
        insertion(arr,i);
    }
}


int main(){
    int n = 9;
    int arr[] = {8,3,2,5,7,1,9,6,4};
    insertion_sort(arr,n);

    for(int i = 0;i<n;i++)
        cout<<arr[i]<<' ';
    cout<<endl;

    return 0;
}
