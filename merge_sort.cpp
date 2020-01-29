#include <iostream>

using namespace std;

void Merge(int arr[],int l,int m,int r){
    int len = r - l + 1;
    int tmp[len];
    int i = l;
    int j = m+1;
    int k = 0;
    while(i<=m && j<=r){
        if(arr[i]<arr[j]){
            tmp[k] = arr[i];
            i++;
            k++;
        }
        else{
            tmp[k] = arr[j];
            j++;
            k++;
        }
    }
    while(i<=m){
        tmp[k] = arr[i];
        i++;
        k++;
    }
    while(j<=r){
        tmp[k] = arr[j];
        j++;
        k++;
    }
    for(k=0;k<len;k++){
        arr[l+k] = tmp[k];
    }
}

void merge_sort(int arr[],int l,int r){
    if(l == r){
        return;
    }
    else{
        int m = (l + r)/2;
        merge_sort(arr,l,m);
        merge_sort(arr,m+1,r);
        Merge(arr,l,m,r);
    }
}

int main(){
    int n = 9;
    int arr[] = {8,3,2,5,7,1,9,6,4};
    merge_sort(arr,0,n-1);
    for(int i = 0;i<n;i++)
        cout<<arr[i]<<' ';
    cout<<endl;

    return 0;
}
