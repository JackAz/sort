#include <iostream>

using namespace std;

void heapify(int arr[],int n, int i){ //adjustHeap
    if(i>=n){
        return;
    }
    int c1 = 2 * i + 1;
    int c2 = 2 * i + 2;
    int maxIndex = i;
    if(c1<n && arr[c1]>arr[maxIndex])
        maxIndex = c1;
    if(c2<n && arr[c2]>arr[maxIndex])
        maxIndex = c2;

    if(maxIndex!=i){
        int tmp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = tmp;

        heapify(arr,n,maxIndex);
    }
}

void build_heap(int arr[],int n){
    int parent = (n-1-1)/2;
    int i;
    for(i=parent; i>=0; i--)
        heapify(arr,n,i);
}

void heap_sort(int arr[],int n){
    build_heap(arr,n);
    int i;
    int tmp;
    for(i=n-1;i>0;i--){
        tmp = arr[0];
        arr[0] = arr[i];
        arr[i] = tmp;
        heapify(arr,i,0);
    }
}

int main(){
    int n = 9;
    int arr[] = {8,3,2,5,7,1,9,6,4};
    heap_sort(arr,n);

    for(int i = 0;i<n;i++)
        cout<<arr[i]<<' ';
    cout<<endl;

    return 0;
}
