#include <iostream>

using namespace std;

int select_max_index(int arr[],int n){
    int max_index = 0;
    int i;
    for(i=1;i<n;i++){
        if(arr[i]>arr[max_index])
            max_index = i;
    }
    return max_index;
}

void selection_sort(int arr[],int n){
    int i;
    int index;
    int tmp;
    for(i=n;i>0;i--){
        index = select_max_index(arr,i);
        tmp = arr[index];
        arr[index] = arr[i-1];
        arr[i-1] = tmp;
    }
}


int main(){
    int n = 9;
    int arr[] = {8,3,2,5,7,1,9,6,4};
    selection_sort(arr,n);

    for(int i = 0;i<n;i++)
        cout<<arr[i]<<' ';
    cout<<endl;

    return 0;
}
