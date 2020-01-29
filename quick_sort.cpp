#include <iostream>

using namespace std;

int Partition(int arr[],int l, int r){
    int key = l;
    int i = l+1;
    int j = r;
    int tmp;
    while(i<j){
        while(arr[i]<arr[key] && i<j)
            i++;
        while(arr[j]>arr[key] && i<j)
            j--;
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
    int swap_index;
    if(arr[i]<arr[key])
        swap_index = i;
    else
        swap_index = i - 1;

    tmp = arr[swap_index];
    arr[swap_index] = arr[key];
    arr[key] = tmp;
    return swap_index;
}

void quick_sort(int arr[],int l,int r){
    if(l>=r)
        return;
    else{
        int mid = Partition(arr,l,r);
        quick_sort(arr,l,mid-1);
        quick_sort(arr,mid+1,r);
    }

}


int main(){
    int n = 9;
    int arr[] = {8,3,2,5,7,1,9,6,4};
    quick_sort(arr,0,n-1);

    for(int i = 0;i<n;i++)
        cout<<arr[i]<<' ';
    cout<<endl;

    return 0;
}
